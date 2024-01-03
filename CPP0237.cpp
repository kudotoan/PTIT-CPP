#include <iostream>
using namespace std;
int t, n, ans=0;
char a[25][25];
int check(int x, int y) {
    if (ans>=n-x) return 0;
    if (a[x][y]=='O') return 0;
    int s=1, y1=y;
    while (a[x][y1+1]=='X' && y1+1<n) y1++;
    int tmp=y1-y;
    while (tmp>0) {
        if (tmp+1<=ans || tmp+1<=s) return s;
        int ok=1;
        for (int i=0; i<=tmp; i++) {
            if (a[x+i][y]!='X' || a[x+tmp][y+i]!='X' || a[x+i][y+tmp]!='X') {
                ok=0;
                break;
            }
        }
        if (ok==1) {
            s=tmp+1;
            break;
        }
        tmp--;
    }
    return s;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) {
        ans=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) cin >> a[i][j];
        }
        for (int i=0; i<n; i++) {
            if (n-i<=ans) break;
            for (int j=0; j<n; j++) {
                if (n-j<=ans) break;
                ans=max(ans,check(i,j));                

            }
                
        }
        cout << ans << endl;
    }
    return 0;
}