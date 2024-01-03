#include <iostream>
#include <cmath>
using namespace std;

void phantich(int n) {
    for (int i=2; i <= sqrt(n); i++) {
        int dem=0;
        while (n%i==0 && n>0) {
            n/=i;
            dem++;
        }
        if (dem!=0) cout << i << " " << dem << endl;
    }
    if (n!=1) cout << n << " " << "1";
}

int main() {
    int n;
    cin >> n;
    phantich(n);
	return 0;
}