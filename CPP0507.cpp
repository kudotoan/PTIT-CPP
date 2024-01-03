#include <iostream>
#include <iomanip>
using namespace std;

struct PhanSo{
    long long tu,mau;
};

void nhap(PhanSo &a) {
    cin >> a.tu >> a.mau;
}

long long GCD(long long a, long long b) {
    while (b!=0) {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

void rutgon(PhanSo &a) {
    long long tmp=GCD(a.tu,a.mau);
    a.tu/=tmp;
    a.mau/=tmp;
}

PhanSo tong(PhanSo a, PhanSo b) {
    long long tmp = 1ll*a.mau*b.mau;
    PhanSo t;
    t.mau=tmp;
    t.tu=(tmp/a.mau)*a.tu+(tmp/b.mau)*b.tu;
    rutgon(t);
    return t;
}

void in(PhanSo a) {
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}