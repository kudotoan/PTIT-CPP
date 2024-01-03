#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        for (long long i=2; i<=sqrt(n); i++) {
            if (n%i==0) {
                cout << i << " ";
                n/=i;
                i--;
            }
        }
        if (n!=1) cout << n;
         cout << endl;
    }
	return 0;
}