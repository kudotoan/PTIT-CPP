#include <iostream>
using namespace std;
long long solve(long long a[],long long n, long long k) {
    long long d=0;
    long long ans=-100000000;
    long long sum=0;
    for (long long i=0; i<k; i++) {
        sum+=a[i];
    }
    if (ans<sum) {
        ans=sum;
    }
    for (long long i=0; i<=n-k; i++) {
        sum-=a[i-1];
        sum+=a[i+k-1];
        if (ans<sum) {
            ans=sum;
            d=i;
        }
    }
    return d;
}
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        long long a[n+5];
        for (long long i=0; i<n; i++) cin >> a[i];
        long long d=solve(a,n,k);
        for (long long i=d; i<d+k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}