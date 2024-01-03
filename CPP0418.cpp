#include <iostream>
#include <map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        map <int, int> mp;
        for (int i=0; i<n+m; i++) {
            int tmp;
            cin >> tmp;
            mp[tmp]++; 
        }
        for (map<int, int>::iterator it=mp.begin(); it!=mp.end(); it++) {
            cout << it->first << " ";
        }
        cout << endl;
        for (map<int, int>::iterator it=mp.begin(); it!=mp.end(); it++) {
            if (it->second>=2) cout << it->first << " ";
        }
        cout << endl;
    }
    return 0;
}