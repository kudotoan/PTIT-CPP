#include <iostream>
using namespace std;
long long KANADE(int a[], int n) {
    long long ans=-1e9;
    long long sum=0;
    for (int i=0; i<n; i++) {
        sum+=1ll*a[i];
        ans=max(sum,ans);
        if (sum<0) sum=0;
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cout << KANADE(a,n) << endl;
    }
    return 0;
}