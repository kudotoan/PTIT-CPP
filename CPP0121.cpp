#include <iostream>
using namespace std;

int GCD(int a, int b) {
    while (b!=0) {
        int tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}

long long LCM(int a, int b) {
    return 1ll * a * b/GCD(a,b);
}

void solve(int a, int b) {
    cout << LCM(a,b) << " " << GCD(a,b) << endl;
}

int main() {
	int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;
        solve(a,b);
    }
	return 0;
}