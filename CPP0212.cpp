#include <iostream>
#include <cmath>
#define MOD 1000000007
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x,a[2005];
        cin >> n >> x;
        for (int i=n-1; i>=0; i--) {
            cin >> a[i];
        }
        long long ans=0;
        for (int i=0; i<n; i++) {
            long long bac=1;
            for (int j=1; j<=i; j++) {
                bac=(bac*x) % MOD;
            }
            ans=(ans+(a[i]*bac) % MOD) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}