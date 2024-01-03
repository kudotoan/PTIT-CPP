#include <iostream>
#include <vector>
using namespace std;
int t;
int solve(string s) {
    int res=0;
    vector<pair<char,int>> v;
    v.push_back({'2',-1});
    for (int i=0; i<s.length(); i++) {
        v.push_back({s[i],i});
        while (v.size()>=3 && v[v.size()-3].first=='1' && v[v.size()-2].first=='0' && v[v.size()-1].first=='0') {
            for (int i=1; i<=3; i++) v.pop_back();
        }
    res=max(res, i-v.back().second);
    }
    return res;
}
int main() {
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}