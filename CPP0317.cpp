#include <iostream>
#include <string>
using namespace std;

bool stn(string s) {
    for (int i=0; i< s.length(); i++) {
        if (s[i]%2!=0) return false;
    }
    for (int i=0; i<s.length()/2; i++) {
        if (s[i]!=s[s.length()-1-i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if (stn(n)) cout << "YES" << endl; else cout << "NO" << endl;
    }
	return 0;
}