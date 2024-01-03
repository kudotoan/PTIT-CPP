#include <iostream>
#include <algorithm>
using namespace std;

int main() {
        int n,a[105];
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        for (int i=0; i<n; i++) {
            cout << a[i] << " ";
            while (a[i+1]==a[i]) i++;
        }
	return 0;
}