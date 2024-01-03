#include <iostream>
using namespace std;
int t;
int solve(int b, int p) {
    int ans=0;
    for (long long i=0; i<p; i++) {
        if ((i*i)%p==1 && i<=b) {
            long long s=i+p*(b/p);
            if (s>b) s-=p;
            ans+=s/p+1;
        }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) {
        int b,p;
        cin >> b >> p;
        cout << solve(b,p) << endl;
    }
    return 0;
}