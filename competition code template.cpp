#include <bits/stdc++.h>

using namespace std;

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

#ifdef LOCAL

#define cin testIStream

string test;
istringstream testIStream;

void genTest() {
    test = string(R"foo(
--|-- |-- /--\ --|--  /--\   /\   |\  /| |--\ |   |--
  |   |-- `--.   |    `--.  /__\  | \/ | |__/ |   |--
  |   |__ \__/   |    \__/ /    \ |    | |    |__ |__
    )foo");
}
#endif

int main() {
    #ifdef LOCAL
    genTest();
    testIStream = istringstream(test);
    #endif
    
    // ...
}
