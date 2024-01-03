#include <iostream>
#include <iomanip>
using namespace std;
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
    return in;
}
ostream &operator<<(ostream &out, SinhVien a) {
    out << a.maSV << " " << a.name << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.GPA;
    return out;
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