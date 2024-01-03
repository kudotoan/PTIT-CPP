#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        int a[100000];
        cin >> k >> n;
        for (int i=0; i<k*n; i++) {
            cin >> a[i];
        }
        sort(a,a+n*k);
        for (int i=0; i<n*k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
	return 0;
}