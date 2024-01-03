#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,m;
        cin >> a >> m;
        int x=-1;
        for (int i=0; i<m; i++) {
            if ((a*i)%m==1) x=i;
        }
        cout << x << endl;
    }
	return 0;
}