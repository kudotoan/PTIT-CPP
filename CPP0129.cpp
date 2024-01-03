#include <iostream>
using namespace std;

int solve(int n, int p) {
    if (n==p) return 1;
    if (n<p) return 0;
    int res=0;
    for (int i=p; i<=n; i+=p) {
        int tmp=i;
        while (tmp%p==0) {
            res++;
            tmp/=p;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,p;
        cin >> n >> p;
        cout << solve(n,p) << endl;
    }
    return 0;
}