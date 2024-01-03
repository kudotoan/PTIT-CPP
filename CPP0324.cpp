#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
// string operator+(string x, string y) {

//     while (x.length()<y.length()) {
//         x='0'+x;
//     }
//     while (y.length()<x.length()) {
//         y='0'+y;
//     }
//     if (x<y) swap (x,y);
//     reverse(x.begin(),x.end());
//     reverse(y.begin(),y.end());
//     string ans="";
//     int nho=0;
//     for (int i=0; i<x.length(); i++) {
//         int tmp=x[i]+y[i]+nho-'0'-'0';
//         nho=0;
//         if (tmp>=10) {
//             tmp-=10;
//             nho+=1;
//         }
//         char a=tmp+'0';
//         ans+=a;
//     }
//     reverse(ans.begin(),ans.end());
//     if (nho==1) {
//         ans='1'+ans;
//     }
//     return ans;

// }
// string operator-(string x, string y) {
//     while (x.length()<y.length()) {
//         x='0'+x;
//     }
//     while (y.length()<x.length()) {
//         y='0'+y;
//     }
//     if (x<y) swap (x,y);
//     reverse(x.begin(),x.end());
//     reverse(y.begin(),y.end());
//     string ans="";
//     int nho=0;
//     for (int i=0; i<x.length(); i++) {
//         int tmp=x[i]-y[i]-nho;
//         nho=0;
//         if (tmp<0) {
//             tmp+=10;
//             nho+=1;
//         }
//         char a=tmp+'0';
//         ans+=a;
//     }
//     reverse(ans.begin(),ans.end());
//     while (ans[0]=='0') ans.erase(ans.begin());
//     return ans;

// }
// string operator%(string x, string y) {
//     string n=x;
//     while (n.length()>17) {
//         string m=y,mOld;
//         while (m.length()<n.length()) {
//             mOld=m;
//             m=m+m;
//         }
//         if (m>n) m=m-mOld;
//         n=n-m;
//     }
//     stringstream ss(n);
//     stringstream ss1(y);
//     long long a,b;
//     ss>>a;
//     ss1>>b;
//     long long c=a%b;
//     string ans=to_string(c);
//     return ans;
// }
long long operator%(string x, long long y) {
    long long ans=0;
    for (int i=0; i<x.length();i++) {
        ans=(ans*10+x[i]-'0')%y;
    }
    return ans;
}

long long solve(long long a, long long b, long long m) {
    long long ans=1;
    while (b) {
        if (b%2!=0) {
        ans=(ans%m * a%m)%m;
        }
        a=(a%m*a%m)%m;
        b/=2;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        long long b,m;
        cin >> a >> b >> m;
        long long s=a%m;
        long long ans=solve(s,b,m);
        cout << ans << endl;
    }
    return 0;
}