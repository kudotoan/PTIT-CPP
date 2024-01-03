#include <iostream>
#include <algorithm>
#define MAXN 100005
using namespace std;
int a[MAXN];
int _binarysearch(int n, int x) {
    int l=0, r=n-1;
    while (l<=r) {
        int mid=(l+r)/2;
        if (a[mid]==x) return 1;
        else if (a[mid]>x) r=mid-1; else l=mid+1;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        int ok=0;
        for (int i=0; i<n; i++) {
            if (_binarysearch(n,x+a[i]) || _binarysearch(n,a[i]-x)) {
                cout << "1\n";
                ok=1;
                break;
            }
        }
        if (ok) continue;
        cout << "-1\n" << endl;
    }
    return 0;
}