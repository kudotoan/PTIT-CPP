#include <iostream>
#include <cctype>
using namespace std;
int main() {
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
	int t;
	cin >> t;
	while (t--) {
		char c;
		cin >> c;
		if (c>='a' && c <= 'z') cout << (char)toupper(c) << endl;
		else cout << (char)tolower(c) << endl;
	}
	return 0;
}