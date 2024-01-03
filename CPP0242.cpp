#include <iostream>
using namespace std;
int n, a1[1005],a2[1005];

int solve() {
    int m1[1005],m2[1005];
    m1[0]=a1[0];
    m2[0]=a2[0];
    for (int i=1; i<n; i++) {
        m1[i]=m1[i-1]+a1[i];
        m2[i]=m2[i-1]+a2[i];
    }
    int ans=0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (m1[j]-m1[i]+a1[i]==m2[j]-m2[i]+a2[i]) {
                ans=max(ans,j-i+1);
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) cin >> a1[i];
        for (int i=0; i<n; i++) cin >> a2[i];
        cout << solve() << endl;
    }
    return 0;
}