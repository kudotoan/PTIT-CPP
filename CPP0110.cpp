#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin,s);
        int a=s.find("084");
        s.erase(a,3);
        cout << s << endl;
    }
	return 0;
}