#include <iostream>
using namespace std;

long long GCD(long long a, long long b) {
    while (b!=0) {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

long long LCM(long long a, long long b) {
    return 1ll*a*b/GCD(a,b);
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long M,N,A,B;
        cin >> M >> N >> A >> B;
        if (M>N) swap(M,N);
        long long ans=1l*N/A-1l*M/A + 1l*N/B-1l*M/B - (1ll*N/LCM(A,B) - 1ll*M/LCM(A,B));
        if (M%A==0) ans++;
        if (M%B==0) ans++;
        if ((1ll*M)%LCM(A,B)==0) ans--;
        cout << ans << endl;
    }
    return 0;
}