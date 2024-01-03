#include <iostream>
#include <fstream>
#include <cctype>
#include <set>
int main() {
    std::ifstream filein("VANBAN.in");
    std::string tmp;
    std::set <std::string> st;
    while (filein>>tmp) {
        for (int i=0; i<tmp.length(); i++) tmp[i]=tolower(tmp[i]);        
        st.insert(tmp);
    }
    for (auto x:st) {
        std::cout << x << std::endl;
    }
    filein.close();
    return 0;
}