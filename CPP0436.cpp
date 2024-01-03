#include <iostream>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+5];
        set <int> st;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            st.insert(a[i]);
        }
        for (int i=0; i<n; i++) {
            if (st.upper_bound(a[i])!=st.end()) {
                cout << *st.upper_bound(a[i]) << " "; 
            } else cout << '_' << " ";
        }
        cout << endl;
    }
    return 0;
}