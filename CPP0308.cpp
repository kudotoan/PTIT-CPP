#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        int d[200]={};
        for (int i=0; i<a.length(); i++) {
            d[a[i]]++;
        }
         for (int i=0; i<a.length(); i++) {
            if (d[a[i]]==1) cout << a[i];
        }
        cout << endl;
    }
	return 0;
}