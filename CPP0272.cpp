#include <iostream>
using namespace std;
const int MOD=1e9+7;
int n,a[100];
long long hx() {
    long long ans=1;
    for (int i=0; i<n; i++) {
        ans=ans*a[i];
        ans%=MOD;
    }
    return ans;
}

int gcd(int a, int b) {
    while (b!=0) {
        int tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int gx() {
    int ans=a[0];
    for (int i=0; i<n; i++) {
        ans=gcd(ans,a[i]);
    }
    return ans;
}

long long pow(long long a, long long b) {
    if (b==1) return a;
    long long tmp=pow(a,b/2)%MOD;
    if (b%2==0) return (tmp*tmp)%MOD;
        else return (((tmp*tmp)%MOD)*a)%MOD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cout << pow(hx(),gx()) << endl;
    }
    return 0;
}