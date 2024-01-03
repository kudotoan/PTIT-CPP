#include <iostream>
#define MAX 10000007
using namespace std;

long long n, a[MAX];

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]==0) cnt++;
        }
        for (int i=0; i<n; i++) {
            if (a[i]!=0) cout << a[i] << " ";
        }
        for (int i=0; i<cnt; i++) {
            cout << "0" << " ";
        }
        cout << endl;
    }
	return 0;
}