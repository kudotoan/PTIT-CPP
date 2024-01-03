#include <iostream>
#include <cstring>
using namespace std;
int n,a[1001000],b[1001000]={};  
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        memset(b,0,sizeof(b));
        for (int i=0; i<n; i++) {
            cin >> a[i];
            b[a[i]]++;
        }
        int ans=0;
        for (int i=0; i<n; i++) {
            if (b[a[i]]>=2) {
                ans+=b[a[i]];
                b[a[i]]=0;
            }
        }
        cout << ans << endl;
    }
	return 0;
}