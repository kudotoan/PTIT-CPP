#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k,a[10005];
        cin >> n >> k;
        for (int i=0; i<n*n; i++) {
            cin >> a[i];
        }
        sort(a,a+n*n);
        cout << a[k-1] << endl;
    }
    return 0;
}