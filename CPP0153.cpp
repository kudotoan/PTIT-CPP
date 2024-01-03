#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        int du=n % k;
        int thuong = n/k;
        int ans= thuong*(k*(k-1))/2+(du*(du+1))/2;
        cout << ans << endl;
    }
	return 0;
}