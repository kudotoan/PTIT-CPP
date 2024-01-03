#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int solve(string s) {
    if (s.length()>9) return 0;
    long long n=0;
    for (int i=0; i<s.length(); i++) {
        if (s[i]<'0' || s[i]>'9') return 0;
        n=n*10+s[i]-'0';
    }
    if (n<=INT_MAX) return (int)n;
    return 0;
}

int main() {
    ifstream filein;
    filein.open("DATA.in");
    long long sum=0;
    string tmp;
    while (filein>>tmp) {
        sum+=solve(tmp);
    }
    cout << sum;
    filein.close();
    return 0;
}