#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n, a[1001000]={};
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        memset(a,0,sizeof(a));
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            if (tmp>0) a[tmp]++;
        }
        for (int i=1; i<1001000; i++) {
            if (a[i]==0) {
                cout << i << endl;
                break;
            }
        }
        
    }
	return 0;
}