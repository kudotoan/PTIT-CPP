#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin,s);
        vector <string> v;
        stringstream ss(s);
        string tmp;
        while (ss>>tmp) {
            v.push_back(tmp);
        }
        for (auto it=v.rbegin(); it!=v.rend(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}