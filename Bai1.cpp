#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool check(char a) {
    if (a>='0' && a<='9') return true;
    return false;
}

int solve(string s) {
    string tmp="";
    for (int i=0; i<s.length(); i++) {
        if (check(s[i])) tmp+=s[i];
    }
    int ans;
    if (tmp!="") ans=stoi(tmp); else ans=1;
    return ans;
}


int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl; 
    }
    return 0;
}