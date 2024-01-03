#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
#include <vector>
using namespace std;

void upper(string &s) {
    for (int i=0; i<s.length(); i++) {
        s[i]=toupper(s[i]);
    }
}

void fix(string &s) {
    s[0]=toupper(s[0]);
    for (int i=1; i<s.length(); i++) {
        s[i]=tolower(s[i]);
    }
}

int main() {
    string s;
    getline(cin,s);
    for (int i=0; i<s.length(); i++) {
        s[i]=tolower(s[i]);
    }
    stringstream ss(s);
    vector <string> v;
    string tmp;
    while (ss>>tmp) {
        v.push_back(tmp);
    }

    upper(v[v.size()-1]);
    
    for (int i=0; i<v.size()-1; i++) {
        fix(v[i]);
        if (i!=v.size()-2) cout << v[i] << " "; else {
            cout << v[i] << ", ";
        }
    }
    cout << v[v.size()-1];
	return 0;
}