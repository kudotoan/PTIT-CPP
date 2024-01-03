#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    while (b!=0) {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
bool check(long long n, long long m) {
    long long s=(n*(n+1))/2;
    if (s<=m || (s-m)%2!=0) return false;
    long long b=(s-m)/2, a= b+m;
    return gcd(a,b)==1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,m;
        cin >> n >> m;
        int ok=check(n,m);
        if (ok) cout << "Yes\n"; else cout << "No\n";
    }
    return 0;
}