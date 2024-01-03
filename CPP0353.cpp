#include <iostream>
using namespace std;
void solve(string &s) {
    for (int i=0; i<s.length(); i++) {
        switch (s[i]) {
        case 'a':
        case 'b':
        case 'c':
        case 'A':
        case 'B':
        case 'C':
            s[i]='2';
            break;
        case 'd':
        case 'e':
        case 'f':
        case 'D':
        case 'E':
        case 'F':
            s[i]='3';
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'g':
        case 'h':
        case 'i':
            s[i]='4';
            break;
        case 'J':
        case 'K':
        case 'L':
        case 'j':
        case 'k':
        case 'l':
            s[i]='5';
            break;
        case 'M':
        case 'N':
        case 'O':
        case 'm':
        case 'n':
        case 'o':
            s[i]='6';
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'p':
        case 'q':
        case 'r':
        case 's':
            s[i]='7';
            break;
        case 'T':
        case 'U':
        case 'V':
        case 't':
        case 'u':
        case 'v':
            s[i]='8';
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            s[i]='9';
            break;
        }
    }
}

void check(string s) {
    for (int i=0; i<s.length()/2; i++) {
        if (s[i]!=s[s.length()-i-1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
        check(s);
    }
    return 0;
}