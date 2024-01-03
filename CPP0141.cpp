#include <iostream>
#include <cmath>
using namespace std;
long long fibo[100];

void khoitao() {
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2; i<=92; i++) {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
}

void check(long long n) {
    for (int i=0; i<=92; i++) {
        if (fibo[i]==n) {
            cout << "YES\n";
            return;
        }
        if (fibo[i]>n) break;
    }
    cout << "NO\n";
}

int main() {
    khoitao();
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        check(n);
    }
    return 0;
}