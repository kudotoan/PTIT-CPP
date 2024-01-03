#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int n, a[100100];
int s[100100];
void sang() {
    for (int i=0; i<=100000; i++) a[i]=1;
    a[0]=0;
    a[1]=0;
    for (int i=2; i<=316; i++) {
        if (a[i]) {
            for (int j=i*i; j<=100000; j+=i) {
                a[j]=0;
            } 
        }
    }
    for (int i=0; i<=100000; i++) {
        s[i]=s[i-1]+a[i];
    }
}

int main() {
    sang();
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        if (L>R) swap(L,R);
        int ans=s[R]-s[L];
        if (a[L]) ans++;
        cout << ans << endl;   
    }
    return 0;
}