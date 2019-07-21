# competition-experience

Good luck! Gonna win!

---
# Printing a docker in Cpp smartly
```cpp
template<typename T>
ostream& operator<< (ostream& out, const vector<T>& v) {
    out << "{ ";
    size_t last = v.size() - 1;
    for(size_t i = 0; i < v.size(); ++i) {
        out << v[i];
        if (i != last) 
            out << ", ";
    }
    out << " }\n";
    return out;
}
```
