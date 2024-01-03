#include <iostream>
using namespace std;
int mod=1e9+7;
int FIBO[1005];
void khoitao() {
    FIBO[0]=0;
    FIBO[1]=1;
    for (int i=2; i<=1000; i++) {
        FIBO[i]=FIBO[i-1]+FIBO[i-2];
        FIBO[i]%=mod;
    }
}
int main() {
    khoitao();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << FIBO[n] << endl;
    }
    return 0;
}