#include <iostream>
#include <iomanip>
using namespace std;

struct NhanVien {
    string ma,name,sex,date,adress,masothue,datehopdong;    
};

void nhap(NhanVien &a) {
    a.ma="00001";
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.date);
    getline(cin,a.adress);
    getline(cin,a.masothue);
    getline(cin,a.datehopdong);
}

void in(NhanVien a) {
    cout << a.ma << " " << a.name << " " << a.sex << " " << a.date << " " << a.adress << " " << a.masothue << " " << a.datehopdong;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}