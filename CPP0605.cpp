#include <iostream>
#include <iomanip>
using namespace std;

class PhanSo{
    private:
    long long tu,mau;
    public:
    PhanSo(long long tu, long long mau);
    void rutgon();
    friend istream &operator>>(istream &in, PhanSo &a);
    friend ostream &operator<<(ostream &out, PhanSo a);
};

PhanSo::PhanSo(long long tu, long long mau) {
    this->tu=tu;
    this->mau=mau;
}
istream &operator>>(istream &in, PhanSo &a) {
    in >> a.tu >> a.mau;
    return in;
}

ostream &operator<<(ostream &out, PhanSo a) {
    out << a.tu << "/" << a.mau;
    return out;
}

long long GCD(long long a, long long b) {
    while (b!=0) {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

void PhanSo::rutgon() {
    long long tmp=GCD(this->tu,this->mau);
    this->tu/=tmp;
    this->mau/=tmp;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}