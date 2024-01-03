#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s[n];
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }
        int ans=1e9;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                if (abs(s[i]+s[j])<abs(ans)) ans=s[i]+s[j];
            }
        }
        cout << ans << endl;
    }
	return 0;
}