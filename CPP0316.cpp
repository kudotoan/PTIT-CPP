#include <iostream>
#include <string>
using namespace std;
int check(string n) {
    if (n=="0") return 0;
    int res=0;
    for (int i=0; i<n.length(); i++) {
        int tmp=n[i]-'0';
        res+=tmp;
        res%=9;
    }
    if (res%9==0) return 1;
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}