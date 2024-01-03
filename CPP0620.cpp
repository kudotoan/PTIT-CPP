#include <iostream>
#include <algorithm>
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
    friend bool cmp(SinhVien a, SinhVien b);
};

bool cmp(SinhVien a, SinhVien b) {
    if (a.lop < b.lop) return true;
    if (a.lop > b.lop) return false;
    return a.MSV<b.MSV;

}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    SinhVien SV[n];
    for (int i=0; i<n; i++) {
        cin >> SV[i];
    }
    sort(SV, SV+n, cmp);

    for (int i=0; i<n; i++) {
        cout << SV[i] << endl;
    }
    return 0;
}