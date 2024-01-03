#include <iostream>
#include <cmath>
using namespace std;

int check(int n) {
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ok=0;
        int i;
        for (i=2; i<=n/2; i++) {
            if (check(i) && check(n-i)) {
                ok=1;
                break;
            }
        }
        if (ok) cout << i << " " << n-i << endl; else cout << "-1" << endl;
    }
	return 0;
}