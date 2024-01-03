#include <iostream>
#include <cmath>
using namespace std;

long long GCD(long long a, long long b) {
    while (b!=0) {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

long long TCM(long long a, long long b) {
    return (a*b)/GCD(a,b);
}

long long solve(long long x, long long y, long long z, long long n) {
    long long tmp=TCM(x,y);
    long long temp=TCM(tmp,z);
    if (temp/pow(10,n-1)>=10) return -1;
    long long a=pow(10,n-1)/temp;
    long long ans;
    if (temp*a==pow(10,n-1)) ans=temp*a; else ans=(a+1)*temp;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x,y,z,n;
        cin >> x >> y >> z >> n;
        cout << solve(x,y,z,n) << endl;
    }
    return 0;
}