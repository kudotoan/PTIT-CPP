#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int m,s;

void solve() {
    
    if (m==1 && s==0) {
        cout << "0 0";
        return;
    }
    if (m==0 || s==0) {
        cout << "-1 -1";
        return;
    }

    double tmp=(1.0)*s/m;
    if (tmp>9) {
        cout << "-1 -1";
        return;
    }

    string min="",max="";
    while (s>=9) {
        max+='9';
        s-=9;
    }
    if (s!=0) max+=to_string(s);
    
    while (max.length()<m) {
        max+='0';
    }
    min = max;
    reverse(min.begin(),min.end());
    if (min[0]=='0') {
        min[0]='1';
        for (int i=1; i< min.length(); i++) {
             if (min[i]!='0') {
                min[i]-=1;
                break;
             }
        }
    }
    cout << min <<" ";
    cout << max;
}

int main() {
    cin >> m >> s;
    solve();
	return 0;
}