#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien{
    string ma,name,date,_class;
    float GPA;
};

void chuanhoadate(string &a) {
    if (a[2]!='/') a='0'+a;
    if (a[5]!='/') a.insert(a.begin()+3,'0');
}

void nhap(SinhVien &a) {
    a.ma="B20DCCN001";
    getline(cin,a.name);
    getline(cin,a._class);
    getline(cin,a.date);
    chuanhoadate(a.date);
    cin >> a.GPA;
}

void in(SinhVien a) {
    cout << a.ma << " " << a.name << " " << a._class << " " << a.date << " " << fixed << setprecision(2) << a.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}