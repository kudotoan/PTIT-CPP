#include <iostream>
#include <string>
using namespace std;

void check(string s) {
	for (int i=0; i<(s.length()-1)/2; i++) {
		if (s[i]!=s[s.length()-1-i]) {
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
		long long n;
		cin >> n;
		string s=to_string(n);
		check(s);
	}
	return 0;
}