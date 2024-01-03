#include <iostream>
#include <cmath>
using namespace std;
int t,d=0;
long long ans[100];
int snt(int n) {
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}
void khoitao() {
    for (int i=2; i<=32; i++) {
        if (snt(i)) {
            int tmp=pow(2,i)-1;
            if (snt(tmp)) {
                long long s=1ll*pow(2,i-1)*(pow(2,i)-1);
                ans[d++]=s;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    khoitao();
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int ok=0;
        for (int i=0; i<d; i++) {
            if (n==ans[i]) {
                ok=1;
                break;
            }
        }
        cout << ok << endl;
    }
    return 0;
} 