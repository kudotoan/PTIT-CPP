#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        int ans=-1;
        int d=0;
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            if (tmp==x && d==0) {
                ans=i+1;
                d++;
            }
        }
        cout << ans << endl;
    }
	return 0;
}