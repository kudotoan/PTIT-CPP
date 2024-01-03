#include <iostream>
using namespace std;
long long solve(int a[], int n) {
    long long ans=-1e18;
    for (int i=0; i<n; i++) {
        long long s=1;
        for (int j=i; j<n; j++) {
            s*=1ll*a[j];
            ans=max(ans,s);
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cout << solve(a,n) << endl;
    }
    return 0;
}