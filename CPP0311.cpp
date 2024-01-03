#include <iostream>
#include <string>
using namespace std;
int check(string s) {
    int cnt[500]={0};
    for (int i=0; i<s.length(); i++) {
        cnt[s[i]]++;
    }
    int max=-1e9;
    for (int i=0; i<s.length();i++) {
        if (max<cnt[s[i]]) max=cnt[s[i]];
    }
    int tmp=s.length()-max;
    if (max<=tmp+1) return 1;
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}