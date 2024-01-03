#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a[105][105], c[100005], cnt=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> a[i][j];
            }
        }

        for (int i=0; i<n; i++) {
            c[a[0][i]]=1;
        }

        for (int i=0; i<n; i++) {
            for (int j=1; j<n; j++) {
                int ok=0;
                for (int k=0; k<n; k++) {
                    if (a[0][i]==a[j][k]) {
                        ok=1;
                        break;
                    }
                }
                if (ok==0) c[a[0][i]]=0;
            }   
        }
        for (int i=0; i<n; i++) {
            if (c[a[0][i]]==1) {
                cnt++;
                c[a[0][i]]=0;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}