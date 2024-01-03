#include <iostream>
#include <cmath>
using namespace std;

int solve(int n) {
    if (n%2!=0) return 0;
    int cnt=0;
    for (int i=1; i<=sqrt(n); i++) {
        if (n%i==0) {
            if (i%2==0) cnt++;
            if ((n/i)%2==0) cnt++;
        }
    }
    int m=sqrt(n);
    if (m*m==n && m%2==0) cnt--;
    // if ()
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}