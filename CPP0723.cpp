#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string solve(char a) {
    if (a=='2') return "2";
    if (a=='3') return "3";
    if (a=='4') return "322";
    if (a=='5') return "5";
    if (a=='6') return "53";
    if (a=='7') return "7";
    if (a=='8') return "7222";
    if (a=='9') return "7332";
    return "";
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a;
        cin >> n >> a;
        string ans="";
        for (int i=0; i<=a.length(); i++) {
            ans+=solve(a[i]);
        }
        sort(ans.begin(),ans.end(), greater<char>());
        cout << ans << endl;
    }
    return 0;
}