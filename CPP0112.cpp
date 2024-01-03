#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	int t;
    cin >> t;
    while (t--) {
        double a[4];
        for (int i=0; i<=3; i++) {
            cin >> a[i];
        }
        double ans=sqrt((a[2]-a[0])*(a[2]-a[0])+(a[3]-a[1])*(a[3]-a[1]));
        cout << fixed << setprecision(4) << ans << endl;
    }
	return 0;
}