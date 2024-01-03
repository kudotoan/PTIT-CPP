#include <iostream>
#include <algorithm>
using namespace std;
class DoanhNghiep{
    private:
    string MDN,name;
    int SV;
    public:
    friend istream& operator>>(istream& in, DoanhNghiep &a) {
        getline(cin,a.MDN);
        getline(cin,a.name);
        cin >> a.SV;
        cin.ignore();
        return in;
    }
    friend ostream& operator<<(ostream& out, DoanhNghiep a) {
        out << a.MDN << " " << a.name << " " << a.SV;
        return out;
    }
    friend bool cmp(DoanhNghiep a, DoanhNghiep b);

    int getsv() {
        return this->SV;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if (a.SV>b.SV) return true;
    if (a.SV<b.SV) return false;
    if (a.MDN<b.MDN) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    DoanhNghiep DN[n];
    for (int i=0; i<n; i++) {
        cin >> DN[i];
    }
    sort(DN,DN+n, cmp);
    int q;
    cin >> q;
    while (q--) {
        int a,b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for (int i=0; i<n; i++) {
            if (DN[i].getsv()>=a && DN[i].getsv()<=b) cout << DN[i] << endl;
        }
    }
    return 0;
}