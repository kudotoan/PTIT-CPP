#include <iostream>
using namespace std;
int n, m, a[105][105], b[15][15];

void solve() {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            a[i][j]*=b[i % m][j % m];
        }
    }
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> m;
    if (n%m!=0) return 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<m; j++) {
            cin >> b[i][j];
        }
    }

    solve();
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}