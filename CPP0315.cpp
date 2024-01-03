#include <iostream>
#include <string>
using namespace std;

string solve(string s) {
    int ok=0;
    for (int i=0; i<s.length()-1; i++) {
        if (s[i]>s[i+1]) ok=1;
    }
    if (!ok) return "-1";
    int i=s.length()-1;
    while (s[i]>=s[i-1]) i--;
    int tmp=i-1;
    int nho, max=-1e9;
    for (int j=i; j<s.length(); j++) {
        if (s[j]!=s[tmp] && s[j]<s[tmp] && s[j]>max) {
            max=s[j];
            nho=j;
        }
    }
    swap(s[nho],s[tmp]);
    while (s[0]=='0') s.erase(s.begin());
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}