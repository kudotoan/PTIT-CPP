#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int cnt[1000007];

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(cnt,0,sizeof(cnt));
        int n,x;
        cin >> n >> x;
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            cnt[tmp]++;
        }
        if (cnt[x]!=0) cout << cnt[x] << endl; else cout << "-1" << endl;
    }
	return 0;
}