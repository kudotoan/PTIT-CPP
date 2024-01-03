#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
struct SinhVien {
    string MaSV, name, lop;
    float d1,d2,d3;
};

void nhap(SinhVien &a) {
    cin.ignore();
    getline(cin, a.MaSV);
    getline(cin, a.name);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
}

void in_ds(SinhVien a[], int n) {
    for (int i=0; i<n; i++) {
        cout << i+1 << " "
        << a[i].MaSV << " "
        << a[i].name << " "
        << a[i].lop << " "
        << fixed << setprecision(1)
        << a[i].d1 << " "
        << a[i].d2 << " "
        << a[i].d3 << endl;
    }
}

bool cmp(SinhVien a, SinhVien b) {
    return a.MaSV<b.MaSV;
}

void sap_xep(SinhVien a[], int n) {
    sort(a,a+n,cmp);
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}