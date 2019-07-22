# competition-tricks

Good luck! Gonna win!

---
# Printing a vector in Cpp smartly
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
```cpp
template<typename T>
istream& operator>> (istream& in, vector<T>& vec) {
    T item;
    while (true) {
        in >> item;
        vec.push_back(item);
        if (in.eof() || in.get() != ' ')
            break;
    }
    return in;
}
```
