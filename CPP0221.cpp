#include <iostream>
using namespace std;
int n,m,a[105][105];

void xoay() {
    int up=0,down=n-1,left=0, right=m-1;
    while (up<down && left<right) {
        int tmp=a[up][right];
        for (int i=right; i>=left+1; i--) {
            a[up][i]=a[up][i-1];
        }
        up++;
        int tmp1=a[down][right];
        for (int i=down; i>=up+1; i--) {
            a[i][right]=a[i-1][right];
        }
        a[up][right]=tmp;
        right--;
        tmp=a[down][left];
        for (int i=left; i<=right-1; i++) {
            a[down][i]=a[down][i+1];
        }
        a[down][right]=tmp1;
        down--;
        a[up-1][left]=a[up][left];
        for (int i=up; i<=down-1; i++) {
            a[i][left]=a[i+1][left];
        }
        a[down][left]=tmp;
        left++;
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
        xoay();
            cout << endl;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}