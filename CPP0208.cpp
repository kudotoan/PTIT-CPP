#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        d=d%n;
        int a[n]={};
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
    sort(a, a+n);
    cout << a[d-1] << endl;
    }
	return 0;
}