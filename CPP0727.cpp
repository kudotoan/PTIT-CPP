#include <iostream>
#include <cstring>
using namespace std;
long long S[100005];
// long long max(long long a, long long b) {
//     if (a>b) return a;
//     return b;
// }
long long solve(long long a[], long long n) {
    memset(S,sizeof(S),0);
    S[0]=1ll*a[0];
    S[1]=1ll*a[1];
    S[2]=1ll*(a[0]+a[2]);
    for (long long i=3; i<n; i++) {
        S[i]=1ll*(a[i]+max(S[i-3],S[i-2]));
    }
    long long res=1ll*max(S[n-1],S[n-2]);
    return res;
}
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n+5];
        for (long long i=0; i<n; i++) {
            cin >> a[i];
        }
        cout << solve(a,n) << endl;
    }
    return 0;
}