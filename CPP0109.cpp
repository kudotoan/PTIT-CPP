#include <iostream>
#include <cmath>
using namespace std;

bool check(int n) {
    int chan=0, le=0;
    while (n>0) {
        int tmp=n%10;
        if (tmp%2==0) chan++; else le++;
        n/=10;
    }
    if (chan==le) return true;
    return false;
}

void print(int n) {
    if (n%2!=0) return;
    int d=pow(10,n-1);
    int c=pow(10,n);
    int cnt=0;
    for (int i=d; i<c; i++) {
        if (check(i)) {
            cout << i << " ";
            cnt++;
        }
        if (cnt==10) {
            cout << endl;
            cnt=0;
        }
    }
}

int main() {
	int n;
    cin >> n;
    print(n);
	return 0;
}