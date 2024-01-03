#include <iostream>

using namespace std;

void check(int n) {
	while (n>0) {
		int tmp=n%10;
		if (tmp!=0 && tmp!=6 && tmp!=8) {
			cout << "NO" << endl;
			return;
		}
		n/=10;
	}
	cout << "YES" << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		check(n);
	}
	return 0;
}