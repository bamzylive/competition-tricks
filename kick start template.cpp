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
        while (!in.eof() && (in.peek() == ' ' || in.peek() == '\t')) {
            in.get();
        }
        if (in.eof() || in.peek() == '\n') {
            break;
        }
    }
    return in;
}

#ifdef QUICKTEST

#define cin testIStream

string test;
istringstream testIStream;

void genTest() {
    test = string(R"foo(
ooooooooooooo oooooooooooo  .oooooo..o ooooooooooooo     .oooooo..o       .o.       ooo        ooooo ooooooooo.   ooooo        oooooooooooo 
8'   888   `8 `888'     `8 d8P'    `Y8 8'   888   `8    d8P'    `Y8      .888.      `88.       .888' `888   `Y88. `888'        `888'     `8 
     888       888         Y88bo.           888         Y88bo.          .8"888.      888b     d'888   888   .d88'  888          888         
     888       888oooo8     `"Y8888o.       888          `"Y8888o.     .8' `888.     8 Y88. .P  888   888ooo88P'   888          888oooo8    
     888       888    "         `"Y88b      888              `"Y88b   .88ooo8888.    8  `888'   888   888          888          888    "    
     888       888       o oo     .d8P      888         oo     .d8P  .8'     `888.   8    Y     888   888          888       o  888       o 
    o888o     o888ooooood8 8""88888P'      o888o        8""88888P'  o88o     o8888o o8o        o888o o888o        o888ooooood8 o888ooooood8 
    )foo");
}
#endif

int main() {
    #ifdef QUICKTEST
    genTest();
    testIStream = istringstream(test);
    #endif
    
    // ...
}
