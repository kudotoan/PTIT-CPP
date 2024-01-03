#include <iostream>
#include <cmath>
using namespace std;

void solve(int i) {
    if (i==1) {
        cout << "1 ";
        return;
    }
    if (i%2==0) {
        cout << "2 ";
        return;
    }
    int ans=i;
    for (int j=3; j<=sqrt(i); j++) {
        if (i%j==0) {
            ans=j;
            break;
        }
    }
    cout << ans << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=1; i<=n; i++) {
            solve(i);
        }
        cout << endl;
    }
    return 0;
}