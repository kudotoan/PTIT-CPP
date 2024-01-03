#include <iostream>
using namespace std;

int tohop(int n) {
    return n*(n-1)/2;
}

int solve(int n, int a[], int k) {
    int sum=0;
    int b[1005]={};
    for (int i=0; i<n; i++) {
        b[a[i]]++;
    }

    for (int i=0; i<n; i++) {
        if (k-a[i]>=0 && b[k-a[i]]>0) {
            if (a[i]==k-a[i]) {
                sum+=tohop(b[a[i]]);
                b[a[i]]=0;
            } else {
                sum+=b[a[i]]*b[k-a[i]];
                b[a[i]]=0;
                b[k-a[i]]=0;
            }
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k,a[105];
        cin >> n >> k;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cout << solve(n,a,k) << endl;
    }
	return 0;
}