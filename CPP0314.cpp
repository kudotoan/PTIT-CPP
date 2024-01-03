#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    set <string> s;
    for (int i=0; i<n; i++) {
        string tmp;
        getline(cin,tmp);
        s.insert(tmp);
    }
    cout << s.size();
	return 0;
}