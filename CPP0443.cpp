#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans;
        int d=0;
        for (int i= 1; i<=n-1; i++) {
            int tmp;
            cin >> tmp;
            if (tmp!=i && d==0) {
                ans=i;
                d++;
            }
        }
        cout << ans << endl;
    }
	return 0;
}