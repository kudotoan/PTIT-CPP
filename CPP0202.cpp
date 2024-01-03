#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a[100010];
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        int ans=INT_MAX;
        for (int i=0; i<n-1; i++) {
            if (a[i+1]-a[i] < ans) ans=a[i+1]-a[i];
        }
        cout << ans << endl;
    }
	return 0;
}