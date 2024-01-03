#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

bool check(char a) {
    if (a>='0' && a<='9') return true;
    return false;
}

vector<int> solve(string s) {
    int i=0;
    vector<int> v;
    while (i<s.length()) {
        string tmp="";
        int temp;
        if (check(s[i])) {
            while (check(s[i])) {
                tmp+=s[i];
                i++;
            }
            if (tmp!="") {
            	stringstream ss(tmp);
            	ss>>temp;
			}
            v.push_back(temp);
        }
        i++;
    }
    sort(v.begin(),v.end());
    if (v.empty()) v.push_back(-1);
    return v;
}


int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector <int> v = solve(s);
        int ans=0;
        cout << v[v.size()-1] << endl;
    }
    return 0;
}
