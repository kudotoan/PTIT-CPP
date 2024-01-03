#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        int a[n+1][m+1], used[n+1][m+1];
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> a[i][j];
                used[i][j]=0;
            }
        }
        int x=0,y=0, d=1, down=0, up=1, in=1;
        while (d!=n*m) {
            if (in) {
                cout << a[x][y] << " ";
                used[x][y]=1;
            }
            in=1;
            if (up) {
                if (!used[x-1][y+1] && x-1>=0 && y+1<m) {
                    x--;
                    y++;
                } else if (!used[x][y+1] && y+1<m) {
                        y++;
                        up=0;
                        down=1;
                        continue;
                } else {
                    up=0;
                    down=1;
                }
            }
            if (down) {
                if (!used[x+1][y-1] && x+1<n && y-1 >=0) {
                    x=x+1;
                    y=y-1;
                } else if (!used[x+1][y] && x+1<n) {
                        x=x+1;
                        down=0;
                        up=1;
                } else {
                    up=1;
                    down=0;
                    in=0;
                }
            }
           d++;
        }
        cout << endl;
    }
    return 0;
}