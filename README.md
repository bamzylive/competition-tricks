# competition-tricks

Good luck!

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
        while (!in.eof() && (in.peek() == ' ' || in.peek() == '\t')) {
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
#ifdef QUICKTEST

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
    
    #ifdef QUICKTEST
    genTest();
    testIStream = istringstream(test);
    #endif
    
    // ...
}
```
---
# Closure for encapsulate local debugging
Helpful for avoiding use of global variables or parameters passing, the former dangerous and the latter clumsy.
```cpp
type funcMaybeWithBugs() {
    int n = 2;
    // ...
    auto localDebug = [=]() {
        cout << n << endl;
        // ...
    };
    // ...
    localDebug();
    // ...
    localDebug();
}
```
