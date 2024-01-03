#include <iostream>
#include <string>
#include <sstream>
using namespace std;
long long low(string a, string b) {
    for (int i=0; i<a.length(); i++) {
        if (a[i]=='6') a[i]='5';
    }
     for (int i=0; i<b.length(); i++) {
        if (b[i]=='6') b[i]='5';
    }
    stringstream ss1(a);
    stringstream ss2(b);
    long long s1,s2;
    ss1>>s1;
    ss2>>s2;
    return s1+s2;
}
long long up(string a, string b) {
    for (int i=0; i<a.length(); i++) {
        if (a[i]=='5') a[i]='6';
    }
     for (int i=0; i<b.length(); i++) {
        if (b[i]=='5') b[i]='6';
    }
    stringstream ss1(a);
    stringstream ss2(b);
    long long s1,s2;
    ss1>>s1;
    ss2>>s2;
    return s1+s2;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin >> a >> b;
        cout << low(a,b) << " " << up(a,b) << endl;
    }
    return 0;
}