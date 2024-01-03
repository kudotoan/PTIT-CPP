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
    friend bool cmp(GiangVien a, GiangVien b);
};

bool cmp(GiangVien a, GiangVien b) {
    if (a.getname()<b.getname()) return true;
    if (a.getname()>b.getname()) return false;
    if (a.MGV<b.MGV) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    GiangVien GV[n];
    for (int i=0; i<n; i++) {
        cin >> GV[i];
    }

    sort(GV, GV+n, cmp);

    for (int i=0; i<n; i++) {
        cout << GV[i] << endl;
    }
    return 0;
}