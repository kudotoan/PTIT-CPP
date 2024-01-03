#include <iostream>
#include <algorithm>
using namespace std;
int a[100007];
int n,x;
int _binary_search(int l, int r, int x) {
    if (r>=l) {
        int mid = (l+r)/2;
        if (a[mid]==x) return 1;
        if (a[mid]>x) return _binary_search(l, mid-1, x); 
        if (a[mid]<x) return _binary_search(mid+1,r,x);
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> n >> x;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        cout << _binary_search(0,n,x) << endl;
    }
	return 0;
}