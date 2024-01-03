#include <iostream>
using namespace std;
int t;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+1];
        for (int i=0; i<n; i++) cin >> a[i];
        int ans=0;
        int b[n+1]={};
        for (int i=n-1; i>=0; i--) b[i]=max(b[i+1],a[i]);
        for (int i=0; i<n; i++) {
            int l=i+1, r=n-1, ss=i;
            while (l<=r) {
                int mid=(l+r)/2;
                if (a[i]<=b[mid]) {
                    l=mid+1;
                    ss=max(ss,mid);
                } else r=mid-1;
            }
            ans=max(ans,ss-i);
        }
        cout << ans << endl;
    }
    return 0;
}