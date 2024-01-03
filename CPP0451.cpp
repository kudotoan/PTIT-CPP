#include <iostream>
#define MAXN 1000005
using namespace std;

int a[MAXN];

int _lowerbound(int n, int x) {
    int ans=-1;
    int l=0, r=n-1;
    while (l<=r) {
        int mid=(l+r)/2;
        if (a[mid]==x) {
            ans=mid;
            r=mid-1;
        }
        else if (a[mid]>x) {
            if (ans==-1 || ans > mid) ans=mid;
            r=mid-1;

         } else l=mid+1;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int k,x;
        cin >> k >> x;
        int nho=_lowerbound(n,x);
        int l,r;
        if (a[nho]==x) {
            l=nho-1;
            r=nho+1;
        } else {
            l=nho-1;
            r=nho;
        }
        k/=2;
        for (int i=k-1; i>=0; i--) {
            cout << a[l-i] << " ";
        }
        for (int i=0; i<k; i++) {
            cout << a[i+r] << " ";
        }
        cout << endl;
    }
    return 0;
}