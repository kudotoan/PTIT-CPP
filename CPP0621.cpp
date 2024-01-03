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
    return a.MSV<b.MSV;

}

int main() {
    int n=0;
    SinhVien SV[1005];
    while (cin>>SV[n]) {
        n++;
    }
    sort(SV, SV+n, cmp);

    for (int i=0; i<n; i++) {
        cout << SV[i] << endl;
    }
    return 0;
}