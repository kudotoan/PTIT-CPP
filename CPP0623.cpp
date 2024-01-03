#include <iostream>
using namespace std;
class SinhVien{
    private:
    string MSV, name, lop, email;
    public:
    friend istream& operator>>(istream& in, SinhVien &a) {
        getline(in,a.MSV);
        getline(in,a.name);
        getline(in,a.lop);
        getline(in,a.email);
        return in;
    }
    friend ostream& operator<<(ostream& out, SinhVien a) {
        out << a.MSV << " " << a.name << " " << a.lop << " " << a.email;
        return out;
    }
    string getlop() {
        return this->lop;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();
    SinhVien SV[n];
    for (int i=0; i<n; i++) {
        cin >> SV[i];
    }
    int q;
    cin >> q;
    while (q--) {
        string tmp;
        cin >> tmp;
        cout << "DANH SACH SINH VIEN KHOA " <<tmp<<':' << endl;
        tmp.erase(0,2);
        for (int i=0; i<n; i++) {
            string s=SV[i].getlop();
            string lop="";
            lop+=s[1];
            lop+=s[2];
            if (lop==tmp) cout << SV[i] << endl;
        }
    }
    return 0;
}