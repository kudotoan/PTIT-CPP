#include <iostream>
using namespace std;
int n, a[105][105];
int solve() {
    int maxH=-1e9, maxC=-1e9;
    for (int i=0; i<n; i++) {
        int sum=0;
        for (int j=0; j<n; j++) {
            sum+=a[i][j];
        }
        if (sum>maxH) maxH=sum;
    }
    for (int i=0; i<n; i++) {
        int sum=0;
        for (int j=0; j<n; j++) {
            sum+=a[j][i];
        }
        if (sum>maxC) maxC=sum;
    }
    int ans=0;
    if (maxH>maxC) {
        for (int i=0; i<n; i++) {
            int sum=0;
            for (int j=0; j<n; j++) {
                sum+=a[i][j];
            }
            ans+=maxH-sum;
        }
    } else {
        for (int i=0; i<n; i++) {
            int sum=0;
            for (int j=0; j<n; j++) {
                sum+=a[j][i];
            }
            ans+=maxC-sum;
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> a[i][j];
            }
        }
        cout << solve() << endl;
    }
    return 0;
}