#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a[1005];
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int ans=0;
        int check=1;
        while (check) {
            for (int i=0; i<n; i++) {
                if (a[i]%2!=0) {
                    a[i]--;
                    ans++;
                }
            }
            check=0;
            for (int i=0; i<n; i++) {
                if (a[i]!=0) check=1;
            }
            if (check) {
                for (int i=0; i<n; i++) {
                    a[i]/=2;
                }
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}