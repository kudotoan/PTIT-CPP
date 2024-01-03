#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string operator+(string x, string y) {
    while (x.length()<y.length()) {
        x='0'+x;
    }
    while (y.length()<x.length()) {
        y='0'+y;
    }
    if (x<y) swap (x,y);
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    string ans="";
    int nho=0;
    for (int i=0; i<x.length(); i++) {
        int tmp=x[i]+y[i]+nho-'0'-'0';
        nho=0;
        if (tmp>=10) {
            tmp-=10;
            nho+=1;
        }
        char a=tmp+'0';
        ans+=a;
    }
    reverse(ans.begin(),ans.end());
    if (nho==1) {
        ans='1'+ans;
    }
    return ans;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string x,y;
        cin >> x >> y;
        cout << x+y << endl;;
    }
    return 0;
}