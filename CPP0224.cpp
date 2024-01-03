#include <iostream>
using namespace std;
int n,m,a[105][105];

int x[8]={-1,-1,-1, 0, 0, 1, 1, 1};
int y[8]={-1, 0, 1,-1, 1,-1, 0, 1};

void dfs(int ii, int jj) {
    a[ii][jj]=0;
    for (int i=0; i<8; i++) {
        if (ii+x[i]>=0 && ii+x[i]<n && jj+y[i]>=0 && jj+y[i]<m && a[ii+x[i]][jj+y[i]]) {
            dfs(ii+x[i],jj+y[i]);
        }
    }
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
        int cnt=0;   
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (a[i][j]) {
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}