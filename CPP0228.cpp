#include <iostream>
using namespace std;
void inmt(int n) {
    int a[4*n][4*n];
    int d=1;
    for (int i=0; i <4*n; i++) {
        for (int j=0; j<4*n; j++) a[i][j]=d++;
    }
    int x=2*n, y=2*n-1;
    int c=2;
    d=0;
    while (x!=4*n-1 || y!=4*n-1) {
        for (int i=0; i<=c; i++) cout << a[x-i][y] << " ";
        x=x-c;
        for (int i=1; i<=c; i++) cout << a[x][y+i] << " ";
        y=y+c;
        if (x+c+2>=4*n) c+=1; else c+=2;
        for (int i=1; i<=c; i++) cout << a[x+i][y] << " ";
        x=x+c;
        if (x!=4*n-1 || y!=4*n-1) {
            for (int i=1; i<=c-1; i++) cout << a[x][y-i] << " ";
            y=y-c;
            c+=2;
        }
    }
    cout << endl;
    x=2*n-1; y= 2*n;
    c=2;
    while (x!=0 || y!=0) {
        for (int i=0; i<=c; i++) cout << a[x+i][y] << " ";
        x=x+c;
        for (int i=1; i<=c; i++) cout << a[x][y-i] << " ";
        y=y-c;
        if (x-c-2<0) c+=1; else c+=2;
        for (int i=1; i<=c; i++) cout << a[x-i][y] << " ";
        x=x-c;
        if (x!=0 || y!=0) {
            for (int i=1; i<=c-1; i++) cout << a[x][y+i] << " ";
            y=y+c;
            c+=2;
        }
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        inmt(n);
    }
    return 0;
}