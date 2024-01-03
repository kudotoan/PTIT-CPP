#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int s[100007];
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }
        int min1=1e9, min2=1e9;
        for (int i=0; i<n; i++) {
            if (s[i]<min1) {
                min2=min1;
                min1=s[i];
            } else if (s[i]<min2) {
                min2=s[i];
            }
        }
        if (min1!=min2) cout << min1 << " " << min2 << endl; else cout << "-1" << endl;
        
    }
	return 0;
}