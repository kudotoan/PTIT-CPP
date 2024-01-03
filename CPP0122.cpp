#include <iostream>
using namespace std;

long long GCD(long long a, long long b) {
    while (b!=0) {
        long long tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}

long long LCM(long long a, long long b) {
    return 1ll * a * b/GCD(a,b);
}

int main() {
	long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n==0) {
            cout << "0" << endl;
            continue;
        }
        long long ans=1;
        for (long long i=2; i<=n; i++) {
            ans=LCM(ans,i);
        }
        cout << ans << endl;
    }
	return 0;
}