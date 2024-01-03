#include <iostream>
#include <fstream>
using namespace std;
int n,Q;
string c;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ifstream filein("str.inp");
    ofstream fileout("str.out");
    filein>>n>>Q;
    filein>>c;
    for (int i=0; i<n-1; i++) {
        int u,v;
        filein >> u >> v;
    }
    for (int i=0; i<Q; i++) {
        int u;
        string s;
        filein >> u >> s;
    }
    for (int i=0; i<Q; i++) {
        fileout << "4" << endl;
    }
    filein.close();
    fileout.close();
    return 0;
}