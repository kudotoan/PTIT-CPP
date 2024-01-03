#include <iostream>
#include <algorithm>
using namespace std;
int n,m,p;
int a[55][55], b[55][55];
void nhanmatran() {
    int c[55][55];
    for (int i=0; i<n; i++) {
        for (int j=0; j<p; j++) {
            int sum=0;
            for (int k=0; k<m; k++) {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<p; j++) {
            cout << c[i][j] <<" ";
        }
        cout << endl;
    }
}

int main() {
    
    cin >> n>> m >> p;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<p; j++) {
            cin >> b[i][j];
        }
    }
    nhanmatran();
	return 0;
}