#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a, int b) {
    while (b!=0) {
        int tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int snt(int n) {
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}

int check(int x) {
    int cnt=0;
    for (int i=1; i<x; i++) {
        if (GCD(i,x)==1) cnt++; 
    }
    if (snt(cnt)) return 1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << check(x) << endl;
    }
    return 0;
}