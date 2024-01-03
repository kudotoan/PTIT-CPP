#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien{
    string ma,name,classmate,date;
    float GPA;
};

void chuanhoadate(string &a) {
    if (a[2]!='/') a='0'+a;
    if (a[5]!='/') a.insert(a.begin()+3,'0');
}

void nhapThongTinSV(SinhVien &a) {
    a.ma="N20DCCN001";
    getline(cin,a.name);
    cin >> a.classmate >> a.date >> a.GPA;
    chuanhoadate(a.date);
}

void inThongTinSV(SinhVien &a) {
    cout << a.ma << " " << a.name << " " << a.classmate << " " << a.date << " " << fixed << setprecision(2) << a.GPA;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}