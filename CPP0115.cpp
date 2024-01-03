#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void phantich(int n) {
    for (int i=2; i <= n; i++) {
        int dem=0;
        while (n%i==0 && n>0) {
            n/=i;
            dem++;
        }
        if (dem!=0) cout << i << " " << dem << " ";
    }
}

int main() {
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        phantich(n);
        cout << endl;
    }
	return 0;
}