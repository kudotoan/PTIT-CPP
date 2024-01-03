#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,L;
        cin >> n >> m >> L;
        vector <vector <int>> x(n+1,vector <int>(m+1,0));
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                cin >> x[i][j];
                x[i][j]=x[i][j]+x[i-1][j]+x[i][j-1]-x[i-1][j-1];
            }
        }
        int n1=n-L+1, m1=m-L+1;
        for (int i=1; i<=n1; i++) {
            for (int j=1; j<=m1; j++) {
                cout << (x[i+L-1][j+L-1]-x[i+L-1][j-1]-x[i-1][j+L-1]+x[i-1][j-1])/(L*L) << " ";
            }
        cout << endl;
        }
    }
    return 0;
}