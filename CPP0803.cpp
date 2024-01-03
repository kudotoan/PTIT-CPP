#include <iostream>
#include <fstream>
#include <map>
using namespace std;
int main() {
    ifstream filein("DATA.in");
    int s;
    map <int,int> mp;
    while (filein>>s) {
        mp[s]++;
    }
    for (map<int,int>::iterator it=mp.begin(); it!=mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    filein.close();
    return 0;
}