#include <iostream>
#include <map>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+5];
        map <int,int> mp;
        set <int> st;
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            mp[tmp]++;
        }
        for (auto x:mp) {
            st.insert(x.second);
        }
        for(auto x=st.rbegin(); x!=st.rend(); x++) {
            for (auto y:mp) {
                if (y.second==*x) {
                    while (y.second>0) {
                        cout << y.first << " ";
                        y.second--;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}