#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,min=1e9, max=-1e9;
        cin >> n >> m;
        long long ans=0;
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            if (max < tmp) max=tmp;
        }
        for (int i=0; i<m; i++) {
            int tmp;
            cin >> tmp;
            if (min > tmp) min = tmp;
        }
        ans=1ll*min*max;
        cout << ans;
        cout << endl;
    }
	return 0;
}