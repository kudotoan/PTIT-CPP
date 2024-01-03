#include <iostream>
#include <string>
using namespace std;

bool solve (string s) {
    int tmp=1, sum=0;
    for (int i=s.length()-1; i>=0; i--) {
        sum+=(s[i]-'0')*tmp;
        tmp=(tmp*2)%10;
    }
    if (sum%5==0) return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (solve(s)) cout << "Yes\n" ; else cout << "No\n"; 
    }
	return 0;
}