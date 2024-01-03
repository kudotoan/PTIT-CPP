#include <iostream>
#define MOD 1000000007
using namespace std;
long long power_mod(long long x, long long y){
    if (y==0) return 1;
    if (y==1) return x;
    long long res=power_mod(x,y/2) % MOD;
    if (y%2==0) return (res*res)%MOD; else return x*((res*res)%MOD)%MOD;
}

long long modulo_inverse(int a)
{
      return power_mod(a, MOD - 2);
}

long long slove(long long n, long long r){
    if(n<r) return 0;
    if(r==0 ) return 1;
    long long TP[n+1];
    TP[0]=1;
    for(int i=1;i<=n;i++) {
        TP[i]=(TP[i-1]*i);
        TP[i]%=MOD;
    }
    return ((TP[n] * modulo_inverse(TP[r])) % MOD * modulo_inverse(TP[n-r])) % MOD;
}
int main(){
	int t;
	cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        cout << slove(n,r) << endl;
    }
	return 0;
}