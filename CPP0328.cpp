#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long ans=0;
        for (int i=0; i<s.length(); i++) {
            if ((s[i]-'0')%8==0 && (s[i]-'0')%3!=0) ans++;
        }
        for (int i=0; i<s.length()-1; i++) {
            if (((s[i]-'0')*10+(s[i+1]-'0'))%8==0 && ((s[i]-'0')*10+(s[i+1]-'0'))%3!=0) ans++;
        }
        for (int i=s.length()-1; i>=2; i--) {
            int tmp=(s[i]-'0')+(s[i-1]-'0')*2+(s[i-2]-'0')*4;
            if (tmp%8!=0) continue;
            int sum=s[i]+s[i-1]+s[i-2]-'0'-'0'-'0';
            if (sum%3!=0) ans++;
            for (int j=i-3; j>=0; j--) {
                sum=sum+s[j]-'0';
                if (sum%3!=0) ans++;
    
            }
        }
        cout << ans << endl;
    }
    return 0;
}