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
    for (int i=0; i<n; i++) {
        cout << DN[i] << endl;
    }
    return 0;
}