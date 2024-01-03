#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;
const int maxN=205, maxM=40005;
int s[205]={};
int n, m;
int a[maxN],b[maxN],c[maxN];
int u[40005]={};
long long res=-1e9;
void update() {
    int no=0,ngon=0,price=0;
    long long sum=0;
    for (int i=1; i<=n; i++) {
        if (u[i]!=0 && s[u[i]]==0) return;
        no+=a[i]*s[i];
        ngon+=b[i]*s[i];
        price+=c[i]*s[i];
    }
    sum=1ll*(no*ngon-price);
    res=max(res,sum);
}

void sinh(int i) {
    for (int j=0; j<=1; j++) {
        s[i]=j;
        if (i==n) update();
        else sinh(i+1);
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ifstream filein("restaurant.inp");
    ofstream fileout("restaurant.out");
    filein >> n >> m;
    for (int i=1; i<=n; i++) filein >> a[i] >> b[i] >> c[i];
    for (int i=0; i<m; i++) {
        int tmp1,tmp2;
        filein >> tmp1 >> tmp2;
        u[tmp1]=tmp2;
    };
    sinh(1);
    fileout << res;
    filein.close();
    fileout.close();
    return 0;
}
