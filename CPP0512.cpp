#include <iostream>
using namespace std;
class PhanSo {
    public:
    long long tu,mau;
};
void rutgon(PhanSo &a);
ostream& operator<<(ostream& out, PhanSo a) {
    out << a.tu << "/" << a.mau;
    return out;
}

PhanSo operator*(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu=a.tu*b.tu;
    c.mau=a.mau*b.mau;
    rutgon(c);
    return c;
}

bool operator<(PhanSo a, int x) {
    // chỉ so sánh với số 0
    if (a.mau==0) return false;
    if (a.tu>=0 && a.mau>0) return false;
    if (a.tu <= 0 && a.mau < 0) {
        a.tu*=-1;
        a.mau*=-1;
        return false;
    }
    return true;
}

long long GCD(long long a, long long b) {
    while (b!=0) {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    if (a<0) a*=-1;
    return a;
}

long long TCM(long long a, long long b) {
    long long c=(a*b)/GCD(a,b);
    if (c<0) c*=-1;
    return c;
}

void rutgon(PhanSo &a) {
    if (a.mau<0) {
        a.tu*=-1;
        a.mau*=-1;
    }
    long long x=GCD(a.tu,a.mau);
    a.tu/=x;
    a.mau/=x;
}

PhanSo operator+(PhanSo a, PhanSo b) {
    PhanSo c;
    c.mau=TCM(a.mau,b.mau);
    if (a.mau<0) {
        a.tu*=-1;
        a.mau*=-1;
    }
    if (b.mau<0) {
        b.tu*=-1;
        b.mau*=-1;
    }
    c.tu=a.tu*(c.mau/a.mau)+b.tu*(c.mau/b.mau);
    rutgon(c);
    return c;
}

PhanSo binhphuong(PhanSo a) {
    PhanSo c;
    c.tu=a.tu * a.tu;
    c.mau=a.mau * a.mau;
    rutgon(c);
    return c;
}

void process(PhanSo a, PhanSo b) {
    PhanSo c=binhphuong(a+b);
    cout << c << " ";
    PhanSo d = a*b*c;
    cout << d << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}