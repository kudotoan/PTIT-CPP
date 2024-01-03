#include <iostream>
#include <cmath>
using namespace std;

void check(int n) {
    if (n<2) {
        cout << "NO";
        return;
    }
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
	int n;
    cin >> n;
    check(n);
	return 0;
}