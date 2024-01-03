#include <iostream>
#include <algorithm>
using namespace std;
int n,k,a[21][21],ans=0,x[500],ok=1;

void update() {
    int sum=0;
    for (int i=0; i<2*(n-1); i++) {
        sum+=x[i];
    } 
    if (sum!=n-1) return;
    int s=a[0][0],xi=0,yi=0;
    for (int i=0; i<2*(n-1); i++) {
        if (x[i]==1) xi++; else yi++;
        s+=a[xi][yi];
        if (s>k) return;
    }
    if (s==k) {
        ans++;
    } 
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        x[i]=j;
        if (i==2*(n-1)-1) update(); else Try(i+1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ans=0;
        cin >> n >> k;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> a[i][j];
            }
        }
        Try(0);
        cout << ans << endl;
    }
    return 0;
}