#include <fstream>
#include <iostream>
#include <set>
int main() {
    std::ifstream filein("DATA.in");
    int n,m;
    filein >> n >> m;
    std::set <int> s1,s2;
    for (int i=0; i<n; i++) {
        int tmp;
        filein>>tmp;
        s1.insert(tmp);
    }
    for (int i=0; i<m; i++) {
        int tmp;
        filein>>tmp;
        if (s1.find(tmp)!=s1.end()) s2.insert(tmp);
    }
    for (auto x:s2) {
        std::cout << x << " ";
    }
    filein.close();
    return 0;
}