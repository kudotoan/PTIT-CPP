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

void in(PhanSo a) {
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}