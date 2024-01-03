#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

bool check(char s) {
    if (s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='y') return false;
    return true;
}

int main() {
    string s;
    getline(cin,s);
    for (int i=0; i<s.length(); i++) {
        s[i]=tolower(s[i]);
    }
    for (int i=0; i<s.length(); i++) {
        if (check(s[i])) cout << "." << s[i];
    }
	return 0;
}