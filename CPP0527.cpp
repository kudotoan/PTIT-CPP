#include <iostream>
#include <algorithm>
using namespace std;
struct Time{
    int gio,phut,giay;
};
istream& operator>>(istream& in, Time &a) {
    in >> a.gio >> a.phut >> a.giay;
    return in;
}

ostream& operator<<(ostream& out, Time a) {
    out << a.gio << " " << a.phut << " " << a.giay;
    return out;
}

bool operator<(Time a, Time b) {
    if (a.gio<b.gio) return true; else if (a.gio>b.gio) return false;
    if (a.phut<b.phut) return true; else if (a.phut>b.phut) return false;
    if (a.giay<b.giay) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    Time times[5005];
    for (int i=0; i<n; i++) cin >> times[i];
    sort(times,times+n);
    for (int i=0; i<n; i++) cout << times[i] << endl;
    return 0;
}