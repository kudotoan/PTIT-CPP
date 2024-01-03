#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int le=0,chan=0;
        for (int i=0; i<s.length(); i++) {
            if (i%2==0) {
                le+=s[i]-'0';
            } else chan+=s[i]-'0';
        }
        int tmp=le-chan;
        if (tmp%11==0) cout << "1" << endl; else cout << "0" << endl;
    }
	return 0;
}