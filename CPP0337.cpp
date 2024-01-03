#include <iostream>
#include <set>
using namespace std;
int solve(string s) {
    int ans=1e9;
    set <char> st;
    for (int i=0; i<s.length(); i++) {
        st.insert(s[i]);
    }
    int l=0, a[26]={}, cnt=0;
    for (int i=0; i<s.length(); i++) {
        a[s[i]-'a']++;
        if (a[s[i]-'a']==1) cnt++;
        if (cnt==st.size()) {
            while(a[s[l]-'a']>1) {
                a[s[l]-'a']--;
                l++;
            }
            ans=min(ans,i-l+1);
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
