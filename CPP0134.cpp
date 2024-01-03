#include <iostream>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int res=-1,cnt=0;
        for (int i=2; i<=sqrt(n); i++) {
            if (n%i==0) {
                cnt++;
                if (cnt==k) {
                    res=i;
                    break;
                }
                n/=i;
                i--;
            }
        }
        if (cnt < k && n!=1) {
            cnt++;
            res=n;
        } 
        if (cnt==k) cout << res << endl; else cout << "-1" << endl;
    }
	return 0;
}