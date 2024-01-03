#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
void chuanhoaten(string &a);
void chuanhoadate(string &a);
class SinhVien{
    private:
    string maSV, name, lop, date;
    float GPA;
    public:
    SinhVien();
    friend istream &operator>>(istream &in, SinhVien &a);
    friend ostream &operator<<(ostream &out, SinhVien a);
};

SinhVien::SinhVien() {
    this->name="";
    this->lop="";
    this->maSV="";
    this->date="";
    this->GPA=0;
}

istream &operator>>(istream &in, SinhVien &a) {
    a.maSV="B20DCCN001";
    getline(in,a.name);
    in >> a.lop >> a.date >> a.GPA;
    chuanhoadate(a.date);
    chuanhoaten(a.name);
    return in;
}
ostream &operator<<(ostream &out, SinhVien a) {
    out << a.maSV << " " << a.name << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.GPA;
    return out;
}

void chuanhoaten(string &a) {
    stringstream ss(a);
    string ten="";
    string tmp;
    while(ss>>tmp) {
        tmp[0]=toupper(tmp[0]);
        for (int i=1; i<tmp.length(); i++) {
            tmp[i]=tolower(tmp[i]);
        }
        ten+=tmp + " ";
    }
    a=ten;
}

void chuanhoadate(string &a) {
    if (a[2]!='/') a='0'+a;
    if (a[5]!='/') a.insert(a.begin()+3,'0');
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}