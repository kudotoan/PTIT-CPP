#include <iostream>
#include <algorithm>
#define MAXN 100005
using namespace std;
int a[MAXN];
int main() {
    int t;
     cin >> t;
     while (t--) {
        int n,k;
        cin >> n >> k;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        long long ans=0;
        for (int i=0; i<n-1; i++) {
            int pos=lower_bound(a+i,a+n,a[i]+k)-a;
            cout << pos << endl;
            if (pos>i) ans+=1ll * (pos-i);
        }
        cout << ans << endl;
     }
    return 0;
}