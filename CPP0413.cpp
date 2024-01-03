#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a[1005];
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        int c=n-1;
        int d=0;
        for (int i=0; i<n; i++) {
            if (i%2==0) cout << a[c--] << " "; else cout << a[d++] << " ";
        }
        cout << endl;
    }
	return 0;
}