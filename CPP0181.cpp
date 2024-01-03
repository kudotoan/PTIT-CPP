#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

long long GCD(long long a, long long b) {
    while (b!=0) {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}


void solve(long long a, long long x, long long y) {
    long long tmp=GCD(x,y);
    while (tmp--) {
        cout << a;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,x,y;
        cin >> a >> x >> y;
        solve(a,x,y);
        cout << endl;
    }
    return 0;
}