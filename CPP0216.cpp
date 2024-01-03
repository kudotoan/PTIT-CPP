#include <iostream>
using namespace std;
int n, a[10005];
int l,r;
bool solve() {
    if (l>r) swap (l,r);
    int giam=0;
    for (int i=l; i<=r-1; i++) {
        if (a[i+1]<a[i]) giam++; else {
            if (giam>0) return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cin >> l >> r;
        if (solve())  cout << "Yes\n"; else cout << "No\n";
    }
    return 0;
}