#include <iostream>
using namespace std;
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
		cout << 1ll * n*(n+1)/2 << endl;
	}
	return 0;
}