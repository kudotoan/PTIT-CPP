#include <iostream>
#include <algorithm>
using namespace std;
    int n,a[1000100];
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int d=0,c=n-1;
        while (a[d]<=a[d+1] && d<c) d++;
        if (d==c) {
            continue;
        }
        while (a[c]>=a[c-1]) c--;
        sort(a+d+1, a+c);
        int min=a[d+1],max=a[c-1];
     

        while (a[d]>min && d >= 0) d--;
        while (a[c]<max && c < n) c++;
        cout << d+2 << " " << c << endl;
    }
    return 0;
}