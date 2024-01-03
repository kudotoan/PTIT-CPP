#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        if ((n*(n+1))/2==k) cout << "1" << endl; else cout << "0" << endl;
    }
	return 0;
}