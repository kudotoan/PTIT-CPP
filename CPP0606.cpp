#include <iostream>
using namespace std;

class NhanVien{
    private:
    string ma, name, sex, date, address, masothue, datehopdong;
    public:
    friend istream &operator>>(istream &in, NhanVien &a);
    friend ostream &operator<<(ostream &out, NhanVien a);
};

istream &operator>>(istream &in, NhanVien &a) {
    a.ma="00001";
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.date);
    getline(cin, a.address);
    cin >> a.masothue >> a.datehopdong;
    return in;
}

ostream &operator<<(ostream &out, NhanVien a) {
    out << a.ma << " "
    << a.name << " "
    << a.sex << " "
    << a.date << " "
    << a.address << " "
    << a.masothue << " "
    << a.datehopdong;
    return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}