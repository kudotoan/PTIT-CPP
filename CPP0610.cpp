#include <iostream>
#include <iomanip>
using namespace std;

class PhanSo{
    private:
    long long tu,mau;
    public:
    PhanSo();
    PhanSo(long long tu, long long mau);
    void rutgon();
    friend istream &operator>>(istream &in, PhanSo &a);
    friend ostream &operator<<(ostream &out, PhanSo a);
    PhanSo operator + (PhanSo x);
};

PhanSo::PhanSo() {
    this->tu=1;
    this->mau=1;
}

PhanSo::PhanSo(long long tu, long long mau) {
    this->tu=tu;
    this->mau=mau;
}
istream &operator>>(istream &in, PhanSo &a) {
    in >> a.tu >> a.mau;
    return in;
}

PhanSo PhanSo::operator+(PhanSo x) {
    PhanSo t;
    t.mau=this->mau*x.mau;
    long long tmp=(t.mau/this->mau)*this->tu;
    long long tmp1=(t.mau/x.mau)*x.tu;
    t.tu=tmp+tmp1;
    t.rutgon();
    return t;
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
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}