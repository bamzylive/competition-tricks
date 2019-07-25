# competition-tricks

Good luck! Gonna win!

---
# Printing a vector in Cpp smartly
Tested for 1,2,3-d vectors.
```cpp
template<typename T>
ostream& operator<< (ostream& out, const vector<T>& vec) {
    out << "{ ";
    size_t last = vec.size() - 1;
    for(size_t i = 0; i < vec.size(); ++i) {
        out << vec[i];
        if (i != last) 
            out << ", ";
    }
    out << " }\n";
    return out;
}
```
---
# Similarly, reading a vector
Tested only for 1-d vector. Each line seen as source of the 1-d vector.
```cpp
template<typename T>
istream& operator>> (istream& in, vector<T>& vec) {
    T item;
    while (true) {
        in >> item;
        vec.push_back(item);
        while (!in.eof() && in.peek() == ' ') {
            in.get();
        }
        if (in.eof() || in.peek() == '\n') {
            break;
        }
    }
    return in;
}
```
---
# Quick test
```cpp
#ifdef LOCAL

#define cin testIStream

string test;
istringstream testIStream;

void genTest() {
    // come on
}
#endif
```
```cpp
// in main func 
int main() {
    // ...
    
    #ifdef LOCAL
    genTest();
    testIStream = istringstream(test);
    #endif
    
    // ...
}
```
---
# Using closure to encapsulate local debugging
Helpful for avoiding use of global variables or parameters passing, the former dangerous and the latter clumsy.
```cpp
auto genLocalDebug = []() {
    return [&](auto x) { 
        x += 1;
        cout << x << endl;
    };
};

type funcMaybeWithBugs() {
    int n = 3;
    // ...
    auto localDebug = genLocalDebug();
    localDebug(3);
}
```
