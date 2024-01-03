#include <iostream>
#include <cmath>
using namespace std;

bool check(int n) {
    int cnt=0;
    int temp=0;
    for (int i=2; i<=n; i++) {
        if (n%i==0) {
            if (temp==i) return false;
            temp=i;
            cnt++;
            if (cnt > 3) return false;
            n/=i;
            i--;
        }
    }
    if (n!=1) cnt++;
    return cnt==3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}