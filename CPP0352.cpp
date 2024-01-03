// #include <bits/stdc++.h>
// #include <string>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	cin.ignore();
// 	string nickname[100];
// 	int dem[100];
// 	for(int i = 0; i < 100; i++){
// 		dem[i] = 1;
// 	}
// 	int demLen = 0;
// 	while(n--){
// 		string s;
// 		getline(cin , s);
// 		for(int i = 0; i < s.size(); i++){
// 			s[i] = tolower(s[i]);
// 		}
// 		string sArr[20];
// 		int sArrLong = 0;
// 		stringstream ss(s);
// 		string tmp;
// 		while(ss >> tmp){
// 			sArr[sArrLong] = tmp;
// 			sArrLong++;
// 		}
// 		string nn = "";
// 		nn += sArr[sArrLong - 1];
		
// 		for(int i = 0 ; i < sArrLong - 1; i++){
// 			nn += sArr[i][0];
// 		}
		
// 		int check = 1;
// 		cout << nn;
// 		for(int i = 0; i < demLen; i++){
// 			if(nn == nickname[i]){
// 				dem[i]++;
// 				cout << dem[i];
// 				check = 0;
// 				break;
// 			}
// 		}
// 		cout << "@ptit.edu.vn" << endl;
// 		if(check){
// 			nickname[demLen] = nn;
// 			demLen++;
// 		}
		
// 	}
	
// 	return 0;
// }



#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>
using namespace std;

class Gmail{
    public:
    string name;
    int number;
};

void chuanhoa(string &s) {
    stringstream ss(s);
    string ans="";
    string tmp;
    while (ss>>tmp) {
        for (int i=0; i<tmp.length(); i++) {
            tmp[i]=tolower(tmp[i]);
        }
        ans+=tmp;
        ans+=" ";
    }
    s=ans;
}

string solve(string s) {
    chuanhoa(s);
    stringstream ss(s);
    string tmp;
    vector <string> vs;
    while (ss>>tmp) {
        vs.push_back(tmp);
    }
    string ans="";
    ans+=vs[vs.size()-1];
    for (int i=0; i<vs.size()-1; i++) {
        ans+=vs[i][0];
    }
    return ans;
}

int main() {
    int t;
    vector<Gmail> v;
    cin >> t;
    cin.ignore();
    for (int i=0; i<t; i++) {
        string s;
        getline(cin,s);
        Gmail tmp;
        tmp.name=solve(s);
        tmp.number=1;
        for (int i=0; i<v.size(); i++) {
            if (tmp.name==v[i].name) {
                tmp.number=v[i].number+1;
            }
        }
        v.push_back(tmp);
    }
    for (auto x=v.begin(); x!=v.end(); x++) {
        if (x->number==1) cout << x->name << "@ptit.edu.vn" << endl; else {
            cout << x->name << x->number << "@ptit.edu.vn" << endl;
        }
    }
    return 0;
}