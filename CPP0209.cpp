#include <iostream>
#include <algorithm>
using namespace std;

const int MAX=10100;
int n,q,a[MAX],sum[MAX];

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sum[0]=a[0];
        for (int i=1; i<n; i++) {
            sum[i]=sum[i-1]+a[i];
        }
        for (int i=1; i<=q; i++) {
            int l,r;
            cin >> l >> r;
            cout << sum[r-1] - sum[l-2] << endl;
        }
    }
	return 0;
}