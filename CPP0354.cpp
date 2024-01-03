#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i=0; i<s.length(); i++) {
            cout << s[i];
            int d=1;
            int j=i+1;
            while (s[j]==s[i]) {
                d++;
                j++;
            }
            i=i+d-1;
            cout << d;
        }
        cout << endl;
    }
	return 0;
}