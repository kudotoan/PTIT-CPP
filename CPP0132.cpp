#include <iostream>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long c;
        for (long long i=2; i<=sqrt(n); i++) {
            if (n%i==0) {
                c=n;
                n/=i;
                i--;
            }
        }
        if (n!=1) cout << n << endl; else cout << c << endl;
    }
	return 0;
}