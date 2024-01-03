#include <iostream>
#include <algorithm>
using namespace std;
string a[100005];
bool cmp(string a, string b) {
    return a+b>b+a;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n,cmp);
        for (int i=0; i<n; i++) {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}