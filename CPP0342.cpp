#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sum=0;
        for (int i=0; i<s.length(); i++) {
            if (s[i]<='9' && s[i]>='0') {
                sum+=s[i]-'0';
                s.erase(i,1);
                i--;
            }
        }
        sort(s.begin(),s.end());
        cout << s << sum << endl;
    }
    return 0;
}