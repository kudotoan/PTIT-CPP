#include <iostream>
#include <sstream>
#include <ctype.h>
#include <vector>
using namespace std;

void chuanhoa(string &s) {
    stringstream ss(s);
    string ans="";
    string tmp;
    while (ss>>tmp) {
        tmp[0]=toupper(tmp[0]);
        for (int i=1; i<tmp.length(); i++) {
            tmp[i]=tolower(tmp[i]);
        }
        ans+=tmp;
        ans+=" ";
    }
    s=ans;
}

void solve1(string s) {
    chuanhoa(s);
    stringstream ss(s);
    string tmp;
    vector <string> vs;
    while (ss>>tmp) {
        vs.push_back(tmp);
    }
    cout << vs[vs.size()-1] << " ";
    for (int i=0; i<vs.size()-1; i++) {
        cout << vs[i] << " ";
    }
    cout << endl;
}
void solve2(string s) {
    chuanhoa(s);
    stringstream ss(s);
    string tmp;
    vector <string> vs;
    while (ss>>tmp) {
        vs.push_back(tmp);
    }
    for (int i=1; i<vs.size(); i++) {
        cout << vs[i] << " ";
    }
    cout << vs[0] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int select;
        cin >> select;
        string s;
        cin.ignore();
        getline(cin,s);
        if (select==1) {
            solve1(s);
        };
        if (select==2) {
            solve2(s);
        }
    }
    return 0;
}