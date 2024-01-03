#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> v;
    map<int,int> mp;
    while (cin>>n) {
        v.push_back(n);
        mp[n]++;
    }
    for (int i=0; i<v.size(); i++) {
        if (mp[v[i]]!=0) {
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]]=0;
        }
    }
    return 0;
}