#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    while (b!=0) {
        int tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int gcdArray(int a[], int n) {
    int res=0;
    for (int i=1; i<n; i++) {
        res=gcd(res,a[i]);
    }
    return res;
}

int solve(int x) {
    int res=0;
    for (int i=1; i<=sqrt(x); i++) {
        if (x%i==0) res+=2;
        if (i*i==x) res-=1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+1];
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=1; i<n; i++) {
            a[i]=abs(a[i]-a[0]);
        }
        a[0]=0;
        int x=gcdArray(a,n);
        cout << solve(x) << endl;
    }
    return 0;
}