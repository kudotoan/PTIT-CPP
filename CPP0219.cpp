#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m, a[105][105];
        memset(a,0,sizeof(a));
        cin >> n >> m;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                int tmp;
                cin >> tmp;
                if (tmp==1) {
                    for (int k=0; k<m; k++) {
                        a[i][k]=1;
                    }
                    for (int k=0; k<n; k++) {
                        a[k][j]=1;
                    }
                }
             }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
	return 0;
}