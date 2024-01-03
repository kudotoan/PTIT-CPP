#include <iostream>
#include <set>
#include <sstream>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        set <string> a,b;
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        stringstream ss1(s1);
        string tmp;
        while (ss1>>tmp) {
            a.insert(tmp);
        }
        stringstream ss2(s2);
        while (ss2>>tmp) {
            b.insert(tmp);
        }
        for (auto x:a) {
            if (b.find(x)==b.end()) cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}