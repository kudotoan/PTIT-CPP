#include <iostream>
#include <string>
#include <cstring>
using namespace std;
bool checkstring(string s1, string s2) {
    if (s1.length()>s2.length()) return false;
    for (int i=0; i<s1.length(); i++) {
        if (s2.find(s1[i])==string::npos) return false; else {
            s2.erase(s2.begin()+ s2.find(s1[i]));
        }
    }
    return true;
}
string solve(string s1, string s2) {
    string ans="-1";
    int minstring=1e9;
    int check[105]={0};
    for (int i=0; i<s1.length(); i++) {
        if (s2.find(s1[i])!=string::npos) check[i]=1;
    }
    for (int i=0; i<s1.length()-s2.length()+1; i++) {
        string s3="";
        if (check[i]==1) {
            int start=i;
            for (int j=start; j<s1.length(); j++) {
                if (check[j]==1) s3+=s1[j];
                if (checkstring(s2,s3)) {
                    int end=j;
                    if (minstring>end-start+1) {
                        minstring=end-start+1;
                        ans="";
                        for (int k=start; k<=end; k++) {
                            ans+=s1[k];
                        }
                    }
                    break;
                }
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1,s2;
        cin >> s1 >> s2;
        cout << solve(s1,s2) << endl;
    }
    return 0;
}