#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void check(string s) {
    for (int i=0; i<s.length()-1; i++) {
        if (abs(s[i]-s[i+1])!=1) {
            cout << "NO" << endl;
            return;
        } 
    }
    cout << "YES" << endl;
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