#include <iostream>
#include <string>
using namespace std;

void check(string n) {
    int tmp=stoi(n);
    if (tmp < 86) {
        cout << "0" << endl;
        return;
    };
    if (n[n.length()-1]!='6' || n[n.length()-2]!='8') {
        cout <<"0" << endl;
        return;
    } 
    cout << "1" << endl;
}

int main() {
	int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        check(n);
    }
	return 0;
}