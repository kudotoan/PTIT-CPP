#include <iostream>
using namespace std;
int n, a[1005];

int solve() {
    int res=0;
    int d=0, c=n-1;
    while (d<c) {
        if (a[d]==a[c]) {
            d++;
            c--;
            continue;
        }
        if (a[d]>a[c]) {
            c--;
            a[c]+=a[c+1];
            res++;
        } else {
                d++;
                a[d]+=a[d-1];
                res++;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cout << solve() << endl;
    }
    return 0;
}