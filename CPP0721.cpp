#include <iostream>
using namespace std;

int qhd(int a[], int n) {
    int L[1005]={};
    int ans=1;
    for (int i=0; i<n; i++) {
        L[i]=1;
        for (int j=0; j<i; j++) {
            if (a[j]<a[i]) L[i]=max(L[i],L[j]+1);
        }
        ans=max(ans,L[i]);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a[1005];
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cout << qhd(a,n) << endl;
    }
    return 0;
}