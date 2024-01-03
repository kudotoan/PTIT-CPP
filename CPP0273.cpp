#include <iostream>
#include <cstdlib>
using namespace std;
const int NMAX=1e5;
int n, a[NMAX];

int solve() {
    if (n==1) return 1;
    int s[NMAX];
    s[0]=a[0];
    for (int i=1; i<n; i++) {
        s[i]=s[i-1]+a[i];
    }
    for (int i=1; i<n; i++) {
        int tmp=s[n-1]-s[i];
        if (tmp==s[i-1]) return i+1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        cout << solve() << endl;
    }
    return 0;
}