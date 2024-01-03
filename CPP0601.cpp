#include <iostream>
#include <iomanip>
using namespace std;

class SinhVien{
    private:
    string maSV, name, lop, date;
    float GPA;
    public:
    void nhap();
    void xuat();
};

void chuanhoadate(string &a) {
    if (a[2]!='/') a='0'+a;
    if (a[5]!='/') a.insert(a.begin()+3,'0');
}

void SinhVien::nhap() {
    this->maSV="B20DCCN001";
    getline(cin,this->name);
    cin >> this->lop >> this->date >> this->GPA;
    chuanhoadate(this->date);
}

void SinhVien::xuat() {
    cout << this->maSV << " " << this->name << " " << this->lop << " " << this->date << " " << fixed << setprecision(2) << this->GPA;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}