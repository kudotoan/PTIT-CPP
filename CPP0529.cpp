#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
static int d=1;
struct SinhVien{
    int stt;
    string msv, name, lop, email, doanhnghiep;
};

istream& operator>>(istream& in, SinhVien& a) {
    a.stt=d++;
    getline(cin,a.msv);
    getline(cin,a.name);
    getline(cin,a.lop);
    getline(cin,a.email);
    getline(cin,a.doanhnghiep);
    return in;
}

ostream& operator<<(ostream& out, SinhVien a) {
    out << a.stt << " " << a.msv << " " << a.name << " " << a.lop << " " << a.email << " " << a.doanhnghiep;
    return out;
}

bool cmp(SinhVien a, SinhVien b) {
    return a.msv<b.msv;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    SinhVien list[n];
    for (int i=0; i<n; i++) {
        cin >> list[i];
    }

    sort(list, list+n,cmp);
    int q;
    cin >> q;
    while (q--) {
        string tmp;
        cin >> tmp;
          for (int i=0; i<n; i++) {
            if (list[i].doanhnghiep==tmp) cout << list[i] << endl;
        }
    }
    return 0;
}