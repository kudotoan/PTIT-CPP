#include <iostream>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n,m;
        cin >> n >> m;
        int a1[n+5], a2[m+5];
        int cnt[100500]={};
        for (int i=0; i<n; i++) {
            cin >> a1[i];
            cnt[a1[i]]++;
        }
        for (int i=0; i<m; i++) cin >> a2[i];
        for (int i=0; i<m; i++) {
            while (cnt[a2[i]]) {
                cout << a2[i] << " ";
                cnt[a2[i]]--;
            }
        }
        multiset <int> st;
        for (int i=0; i<n; i++) {
            while (cnt[a1[i]]) {
                st.insert(a1[i]);
                cnt[a1[i]]--;
            }
        }
        for (auto x:st) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}