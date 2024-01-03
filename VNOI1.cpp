#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ifstream filein("fishing.inp");
    ofstream fileout("fishing.out");
    int n;
    filein >> n;
    int w[n], d[n], a[n];
    long long Dmax=0;
    for (int i=0; i<n; i++) {
        filein >> w[i] >> d[i] >> a[i];
        if (Dmax<d[i]) Dmax=d[i];
    }
    int m;
    filein >> m;
    int x[m],c[m];
    for (int i=0; i<m; i++) filein >> x[i] >> c[i];
    int b;
    filein >> b;
    long long res=0;
    long long price;
    for (int i=0; i<m; i++) {
        price=Dmax*b+c[i];
        long long sum=0;
        for (int j=0; j<n; j++) {
            if (w[j]<=x[i]) sum+=a[j];
        }
        sum=sum-price;
        res=max(res,sum);
    }
    fileout << res << endl;
    filein.close();
    fileout.close();
    return 0;
}