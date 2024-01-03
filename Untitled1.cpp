#include <iostream>
#include <algorithm>
using namespace std;

long long search(long long a[], long long n, long long i, long long s) {
    long long l=i+1, r=n-1;
    long long ans=-1;
    while (l<=r) {
        long long mid=(l+r)/2;
        if (a[mid]>=s) {
            r=mid-1;
        }
        else {
            ans=mid;
            l=mid+1;
        }
    }
    return ans;
}

int main() {
    long long n, k;
    cin >> n >> k;
    long long a[n+5];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    long long ans=0;
    for (long long i=0; i<n; i++) {
        long long tmp=k-a[i];
        long long x=search(a,n,i,tmp);
        if (x>i) ans+=x-i;
    }
    cout << ans;
    return 0;
}