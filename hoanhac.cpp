#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m;
    cin >> n >> m;
    map<int,int> mp;
    for (int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    int a[m+5];
    for (int i=0; i<m; i++) {
        cin >> a[i];
    }
    int res[m+5]={};
    for (int i=0; i<m; i++) {
        if (mp.empty()) break;
        auto it=mp.lower_bound(a[i]);
        if (it==mp.end()) {
            --it;
        };
        if (it->first<=a[i]) {
            res[i]=it->first;
            mp[it->first]--;
            if (mp[it->first]==0) mp.erase(it);
        } else if (it->first>a[i]) {
            if (it!=mp.begin()) {
                it--;
                res[i]=it->first;
                mp[it->first]--;
                if (mp[it->first]==0) mp.erase(it);
            } else {
                res[i]=-1;
            }
        }
    }
    for (int x=0; x<m; x++) {
        if (res[x]!=0) cout << res[x] << endl;
            else cout << "-1" << endl;
    }
    return 0;
}