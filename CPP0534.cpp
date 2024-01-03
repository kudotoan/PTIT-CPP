#include <iostream>
#include <map>
using namespace std;
struct cmp{
    bool operator()(string a, string b) {
        if (a.length()!=b.length()) return a.length()>b.length();
        return a>b;
    }
};

bool check(string n) {
    if (n.length()==1) return false;
    for (int i=0; i<n.length()/2; i++) {
         if (n[i]!=n[n.length()-i-1]) return false;
    }
    return true;
}

int main() {
    string n;
    map <string,int,cmp> mp;
    mp.clear();
    while (cin>>n) {
        if (check(n)) mp[n]++;
    }
    for (auto x:mp) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}