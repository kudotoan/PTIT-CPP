#include <iostream>
#include <stack>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack <int> st;
        int dem=1;
        st.push(dem);
        for (int i=0; i<s.length(); i++) {
            dem++;
            if (s[i]=='I') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(dem);
        }
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}