#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int a[10007];
        cin >> n;
        int min=1e9,max=-1e9;
        int cnt[10007]={};
        for (int i=0; i<n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
            if (a[i]>max) max=a[i];
            if (a[i]<min) min=a[i];
        }
        int ans=0;

        for (int i=min+1; i<max; i++) {
            if (cnt[i]==0) ans++;
        }
        cout << ans << endl;
    }
	return 0;
}