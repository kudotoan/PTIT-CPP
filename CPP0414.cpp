#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin.ignore();
        getline(cin,a);
        set <char> st;
        for (int i=0; i<a.length(); i++) {
            if (a[i]>='0' && a[i] <='9') st.insert(a[i]);
        }
        for (char x:st) {
            cout <<x<<" ";
        }
        cout << endl;
    }
	return 0;
}