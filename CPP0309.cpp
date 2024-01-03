#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string a;
        getline(cin,a);
        stringstream ss(a);
        string tmp;
        int ans=0;
        while (ss>>tmp){
            ans++;
        }
        cout << ans << endl;
    }
	return 0;
}