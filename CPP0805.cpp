#include <iostream>
#include <fstream>
#include <set>
#include <cctype>
using namespace std;
int main() {
    ifstream Filein1("DATA1.in");
    ifstream Filein2("DATA2.in");
    set<string> sTMP,s1,s2;
    string tmp;
    while (Filein1>>tmp) {
        for (int i=0; i<tmp.length(); i++) tmp[i]=tolower(tmp[i]);
        sTMP.insert(tmp);
        s1.insert(tmp);
    }
    while (Filein2>>tmp) {
        for (int i=0; i<tmp.length(); i++) tmp[i]=tolower(tmp[i]);
        s1.insert(tmp);
        if (sTMP.find(tmp)!=sTMP.end()) s2.insert(tmp);
    }
    for (auto x:s1) cout << x << " ";
    cout << endl;
    for (auto x:s2) cout << x << " ";
    Filein1.close();
    Filein2.close();
    return 0;
}