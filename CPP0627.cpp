#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int d=1;
class GiangVien{
    private:
    string MGV, name, mon;
    public:
    string getmon() {
        return this->mon;
    }
    void chuanhoamon() {
        string s=this->mon;
        stringstream ss(s);
        string ans="";
        string tmp;
        while (ss>>tmp) {
            ans+=toupper(tmp[0]);
        }
        this->mon=ans;
    }
    string getname() {
        string name=this->name;
        stringstream ss(name);
        while (ss>>name);
        return name;
    }
    string coverName() {
        string name=this->name;
        for (int i=0; i<name.length(); i++) {
            name[i]=tolower(name[i]);
        }
        return name;
    }
    friend istream& operator>>(istream& in, GiangVien &a) {
        a.MGV="GV"+string(2-to_string(d).length(),'0')+to_string(d);
        d++;
        getline(in,a.name);
        getline(in,a.mon);
        a.chuanhoamon();
        return in;
    }
    
    friend ostream& operator<<(ostream& out, GiangVien a) {
        out << a.MGV << " " << a.name << " " << a.mon;
        return out;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();
    GiangVien GV[n];
    for (int i=0; i<n; i++) {
        cin >> GV[i];
    }

    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        string s;
        getline(cin,s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for (int i=0; i<s.length(); i++) s[i]=tolower(s[i]);
        for (int i=0; i<n; i++) {
            string x=GV[i].coverName();
            if (x.find(s)!=string::npos) cout << GV[i] << endl;
        }
    }
    return 0;
}