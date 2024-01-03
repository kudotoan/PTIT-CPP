#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; int k;
        cin >> s >> k;
        int count=0;
        for (int i=0; i<s.length(); i++) {
            int cnt[300]={},d=0;
            for (int j=i; j<s.length(); j++) {
                if (cnt[s[j]]==0) {
                    cnt[s[j]]=1;
                    d++;
                }
                if (d==k) count++;
                if (d>k) break;
            }
        }
        cout << count << endl;
    }
    return 0;
}