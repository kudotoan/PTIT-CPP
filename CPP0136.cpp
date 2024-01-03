#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int a[1000000];

void sang() {
    memset(a,1,sizeof(a));
    a[0]=a[1]=0;
    for (int i=2; i<=1000; i++) {
        if (a[i]) {
            for (int j=i*i; j<=1000000; j+=i) {
                a[j]=0;
            }
        }
    }
}

int main() {
    sang();
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int cnt=0;
        for (long long i=0; i<=sqrt(n); i++) {
            if (a[i]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}