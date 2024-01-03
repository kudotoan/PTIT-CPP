#include <iostream>
#include <map>
using namespace std;

int main() {
    int t, n;
    cin >> t >> n;
    long long a[n];
    while (t--) {
        map <int, int> mp;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i=0; i<n; i++) {
            if (mp[i]==0) cout << "-1 "; else cout << i << " "; 
        }
        cout << endl;
    }
	return 0;
}