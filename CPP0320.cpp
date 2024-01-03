#include <iostream>
using namespace std;

void check(string s) {
    int cnt[15]={};
    if (s[0]=='0') {
        cout << "INVALID\n";
        return;
    }
    for (int i=0; i<s.length(); i++) {
        if (s[i]<'0' || s[i]>'9') {
            cout << "INVALID\n";
            return;
        }
        cnt[s[i]-'0']=1;
    }
    for (int i=0; i<=9; i++) {
        if (cnt[i]!=1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        check(s);
    }
    return 0;
}