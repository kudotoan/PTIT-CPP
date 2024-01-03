#include <iostream>
using namespace std;
void check(string s) {
    s.erase(s.begin()+8);
    int ok=1;
    for (int i=5; i<s.length()-1; i++) {
        if (s[i]!=s[i+1]) {
            ok=0;
            break;
        }
    }
    if (ok) {
        cout << "YES\n";
        return;
    }
    ok=1;
    for (int i=5; i<s.length()-1; i++) {
        if (s[i]>=s[i+1]) {
            ok=0;
            break;
        }
    }
    if (ok) {
        cout << "YES\n";
        return;
    }
    ok=1;
    if (s[5]!=s[6] || s[6]!=s[7] || s[8]!=s[9]) ok=0; 
    if (ok) {
        cout << "YES\n";
        return;
    }
    ok=1;
    for (int i=5; i<s.length(); i++) {
        if (s[i]!='6' && s[i]!='8') {
            ok=0;
            break;
        }
    }
    if (ok) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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