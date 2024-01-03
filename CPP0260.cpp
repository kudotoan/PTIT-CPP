#include <iostream>
#include <algorithm>
using namespace std;
int n, a[1000][1000], c[1000];
int d=0;
void solve() {
    int up=0, bottom=n-1, left=0, right=n-1;
    while (up<=bottom && left <= right) {
        for (int i=left; i<=right; i++) {
            a[up][i] =c[d++];
        }
        up++;
        if (up>bottom) break;
        for (int i=up; i<=bottom; i++) {
            a[i][right] =c[d++];
        }
        right--;
        if (left>right) break;
        for (int i=right; i>=left; i--) {
            a[bottom][i] = c[d++];
        }
        bottom--;
        if (up>bottom) break;
        for (int i=bottom; i>=up; i--) {
            a[i][left] = c[d++];
        }
        left++;
    }
}

int main() {
    cin >> n;
    for (int i=0; i<n*n; i++) {
            cin >> c[i];
    }
    sort(c,c+n*n);
    solve();
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}