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
    string getmsv() {
        return this->MSV;
    }
};

void cover(string &tmp) {
    if (tmp=="Ke toan") {
        tmp="DCKT";
        return;
    }
    if (tmp=="Cong nghe thong tin") {
        tmp="DCCN";
        return;
    }
    if (tmp=="An toan thong tin") {
        tmp="DCAT";
        return;
    }
    if (tmp=="Vien thong") {
        tmp="DCVT";
        return;
    }
    tmp="DCDT";
}

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
    cin.ignore();
    while (q--) {
        string tmp;
        getline(cin,tmp);
        string in=tmp;
        for (int i=0; i<in.length(); i++) {
            in[i]=toupper(in[i]);
        }
        cout << "DANH SACH SINH VIEN NGANH " <<in<<':' << endl;
        cover(tmp);
        for (int i=0; i<n; i++) {
            string s=SV[i].getmsv();
            string nganh="";
            for (int i=3; i<=6; i++) {
                nganh+=s[i];
            }
            if (nganh=="DCCN" || nganh=="DCAT") {
                if (SV[i].getlop()[0]=='E') continue;
            }
            if (nganh==tmp) cout << SV[i] << endl;
        }
    }
    return 0;
}