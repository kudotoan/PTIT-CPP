#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a[10000];
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int max=-1e9;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                if (a[j]-a[i]>max) max=a[j]-a[i];
            }
        }
        if (max<0) max=-1;
    cout << max << endl;
    }
    return 0;
}