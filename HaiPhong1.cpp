#include <iostream>
#include <string>
using namespace std;
bool check(char s) {
    if (s>='a' && s<='z') return true;
    if (s>='A' && s<='Z') return true;
    return false;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    getline(cin,s);
    for (long unsigned int i=0; i<s.size(); i++) {
        if (check(s[i])) cout << s[i];
    }
    return 0;
}