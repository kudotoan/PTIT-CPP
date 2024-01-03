#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string cong(string a, string b) {
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int max=a.length();
    if (max<b.length())max=b.length();
    while (a.length()<max) a+='0';
    while (b.length()<max) b+='0';
    string ans="";
    int nho=0;
    for (int i=0; i<max; i++) {
        int tmp=a[i]+b[i]-'0'-'0'+nho;
        nho=0;
        while (tmp>=10) {
            tmp-=10;
            nho+=1;
        }
        ans+=tmp+'0';
    }
    if (nho!=0) ans+=nho+'0';
    reverse(ans.begin(),ans.end());
    while (ans[0]==0) ans.erase(ans.begin());
    return ans;
}

string tich(long long x, long long y) {
    string b=to_string(y);
    vector <string> v;
    int d=0;
    for (int i=b.length()-1; i>=0; i--) {
    	long long tmp=x*(b[i]-'0');
    	string s=to_string(tmp);
    	for (int j=1; j<=d; j++) s+='0'; 
    	v.push_back(s);
        d++;
    }
    string ans="";
    for (int i=0; i<v.size(); i++) {
        ans=cong(ans,v[i]);
    }
    return ans;
}

long long mod(string a, long long x) {
    long long res=0;
    for (int i=0; i<a.length(); i++) {
        res=(res*10+a[i]-'0')%x;
    }
    return res;
}

int main(){
	int t;
    cin >> t;
    while (t--) {
        long long a,b,c;
        cin >> a >> b >> c;
        cout << mod(tich(a,b),c) << endl;
    }  
	return 0;
}