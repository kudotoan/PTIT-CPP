#include <iostream>
#include <algorithm>
using namespace std;
bool check(long long a[],int n) {
    for (int i=n-1; i>=2; i--) {
        int l=0,r=i-1;
        while (l<r) {
            if (a[l]+a[r]==a[i]) return true;
            else if (a[l]+a[r]<a[i]) l++;
            else r--;
        }
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[5005];
        for (int i=0; i<n; i++) {
            long long tmp;
            cin >> tmp;
            a[i]=tmp*tmp;
        }
        sort (a,a+n);
        if (check(a,n)) cout <<"YES\n"; else cout << "NO\n";
    }
    return 0;
}