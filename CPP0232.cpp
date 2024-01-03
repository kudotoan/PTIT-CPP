#include <iostream>
using namespace std;
int n,m,a[100][100];

void solve() {
    int tmp[100][100];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (i==0) tmp[i][j]=a[i][j]; else
                if (a[i][j]==0) tmp[i][j]=0; else {
                    tmp[i][j]=tmp[i-1][j]+1;
            }
        }
    }
    int ans=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (tmp[i][j]==0) continue;
            int x=tmp[i][j];
            int d=0;
            for (int k=0; k<m; k++) {
                if (tmp[i][k]>=x) d++;
            }
            if (ans<d*x) ans=d*x;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> a[i][j];
            }
        }
        solve();
    }
    return 0;
}