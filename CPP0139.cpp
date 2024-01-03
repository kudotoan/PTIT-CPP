#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int t,snt[100005];
void sang() {
    for (int i=2; i<=100000; i++) snt[i]=1;
    snt[0]=0;
    snt[1]=0;
    for (int i=2; i*i<=100000; i++) {
        if (snt[i]==1) {
            for (int j=i*i; j<=100000; j+=i) snt[j]=0;
        }
    }
}

int tongchuso(int n) {
    string s=to_string(n);
    int sum=0;
    for (int i=0; i<s.length(); i++) {
        sum+=s[i]-'0';
    }
    return sum;
}

bool check(int n) {
    if (snt[n]) return false;
    int s=tongchuso(n);
    int sum=0, i=2;
    int m=sqrt(n);
    while (i<=m) {
        if (n%i==0) {
            sum+=tongchuso(i);
            n/=i;
        } else i++;
    }
    if (n!=1) sum+=tongchuso(n);
    if (s==sum) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sang();
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (check(n)) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}