#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,m;
        cin >> n >> m;
        long long x[500][500],h[5][5],y[500][500];
        for (long long i=0; i<n; i++) {
            for (long long j=0; j<m; j++) cin >> x[i][j];
        }
        for (long long i=0; i<3; i++) {
            for (long long j=0; j<3; j++) cin >> h[i][j];
        }
        long long n1=n-3+1, m1=m-3+1;
        long long sum=0;
        for (long long i=0; i<n1; i++) {
            for (long long j=0; j<m1; j++) {
                for (long long d=0; d<3; d++) {
                    for (long long d1=0; d1<3; d1++) {
                        sum+=x[i+d][j+d1]*h[d][d1];
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}