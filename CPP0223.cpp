#include <iostream>
using namespace std;
int n,m, a[105][105];

void solve() {
    int up=0, bottom=n-1, left=0, right=m-1;
    while (up<=bottom && left <= right) {
        for (int i=left; i<=right; i++) {
            cout << a[up][i] << " ";
        }
        up++;
        if (up>bottom) break;
        for (int i=up; i<=bottom; i++) {
            cout << a[i][right] << " ";
        }
        right--;
        if (left>right) break;
        for (int i=right; i>=left; i--) {
            cout << a[bottom][i] << " ";
        }
        bottom--;
        if (up>bottom) break;
        for (int i=bottom; i>=up; i--) {
            cout << a[i][left] << " ";
        }
        left++;
    }

    cout << endl;
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