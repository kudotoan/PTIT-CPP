#include <iostream>
#include <cmath>
using namespace std;

long long fibo[100]={};
int main() {
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2; i<=92; i++) {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
	return 0;
}