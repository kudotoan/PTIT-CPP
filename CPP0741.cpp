// #include <iostream>
// using namespace std;
// long long x,y,p;

// long long sqr(long long x) {
//     return x*x;
// }

// long long DAC(long long x, long long y) {
//     if (y==0) return 1;
//     if (y%2==0) return sqr(DAC(x,y/2)) % p; 
//     return (x%p * (sqr(DAC(x,y/2)) % p)) %p;
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         cin >> x >> y >> p;
//         cout << DAC(x,y) << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long x,y,p;
        cin >> x >> y >> p;
        long long ans=1;
        for (long long i=1; i<=y; i++) {
            ans*=x%p;
            ans%=p;
        }
        cout << ans << endl;
    }
    return 0;
}