#include <iostream>
#include <cmath>
using namespace std;
int t,snt[1000005], PSUM[10000005]={0};
void sang() {
    for (int i=2; i<=1000000; i++) snt[i]=1;
    snt[0]=0;
    snt[1]=0;
    for (int i=2; i*i<=1000000; i++) {
        if (snt[i]==1) {
            for (int j=i*i; j<=1000000; j+=i) snt[j]=0;
        }
    }
    PSUM[0]=snt[0];
    for (int i=1; i<=1000000; i++) {
        PSUM[i]=PSUM[i-1]+snt[i];
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sang();
    cin >> t;
    while (t--) {
        long long l,r;
        cin >> l >> r;
        if (l>r) swap(l,r);
        long long a=sqrt(l);
        if (a*a<l) a++;
        long long b=sqrt(r);
        int count=PSUM[b]-PSUM[a-1];
        cout << count << endl;
    }
    return 0;
}