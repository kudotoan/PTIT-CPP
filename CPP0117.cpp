#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum(int n) {
    int s=0;
    while (n>0) {
        s+=n%10;
        n/=10;
    }
    return s;
}


void rutgon(int n) {
    while (sum(n)>=10) {
        n=sum(n);
    }
    cout << sum(n) << endl;
}

int main() {
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        rutgon(n);
    }
	return 0;
}