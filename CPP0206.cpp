#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n]={};
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        sort(a,a+n);
        cout << a[n-1] << endl;

        // int ans=a[n/2];
        // if (a[n/2]<a[n/2+1]) {
        //     int i=n/2+1;
        //     while (a[i]<a[i+1]) {
        //         i++;
        //     }
        //     ans=a[i];
        // } else {
        //     if (a[n/2]<a[n/2-1]) {
        //         int i=n/2-1;
        //         while (a[i-1]>a[i]) {
        //         i--;
        //         }
        //         ans=a[i];
        //     }
        // }
        // cout << ans << endl;
    }
	return 0;
}