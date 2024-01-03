#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

void chuanhoa(string &s) {
    for (int i=0; i<s.length(); i++) {
        s[i]=tolower(s[i]);
    }
}

int main() {
    string s;
    string late="";
    while (cin >> s) {
        late+=' '+s;
    }
    chuanhoa(late);
    stringstream ss(late);
    string tmp, ans="";
    while (ss>>tmp) {
        if (ans=="") {
            ans+=tmp;
            ans[0]=toupper(ans[0]);
        } else {
            ans+=' ' + tmp;
        }
        if (tmp[tmp.length()-1]=='.' || tmp[tmp.length()-1]=='!' || tmp[tmp.length()-1]=='?') {
            ans.erase(ans.length()-1);
            cout << ans;
            cout << endl;
            ans="";
        }
    }
        if (ans!="") cout << ans;
    return 0;
}