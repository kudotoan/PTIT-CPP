#include <iostream>
#include <string>
using namespace std;

long long calc(int n) {
    return n*(n-1)/2;
}


int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin,s);
        int cnt[200]={};
        for (int i=0; i<s.length(); i++) {
            cnt[s[i]]++;
        }
        long long res=s.length();
        for (int i=0; i<s.length(); i++) {
            if (cnt[s[i]]>1) {
                res+=calc(cnt[s[i]]);
                cnt[s[i]]=0;
            }
        }
        cout << res << endl;
    }
	return 0;
}