#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        if (s.length()<26) {
            cout << "0" << endl;
            continue;
        }
        set <char> c;
        for (int i=0; i<s.length();i++) {
            c.insert(s[i]);
        }
        if (26-c.size()>k) cout << "0" << endl; else cout << "1" << endl;
    }
	return 0;
}