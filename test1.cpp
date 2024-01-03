#include <iostream>
using namespace std;

class HonSo;
class PhanSo;
int GCD(int a, int b);

class PhanSo {
    private:
    int tu,mau;
    public:
    friend istream& operator>>(istream& in, PhanSo &a);
    friend ostream& operator<<(ostream& out, PhanSo a);
    int getTu();
    int getMau();
    void setTu(int x);
    void setMau(int x);
    operator float();
    PhanSo(float x);
    PhanSo(HonSo x);
    PhanSo();
    PhanSo(int a, int b);
    void RG();
    bool operator<(PhanSo another);
    bool operator>(PhanSo another);
};

class HonSo{
    private:
    int songuyen;
    PhanSo PS;
    public:
    friend istream& operator>>(istream& in, HonSo& a);
    friend ostream& operator<<(ostream& out, HonSo a);
    HonSo();
    HonSo(float x);
    HonSo(PhanSo a);
    operator float();
    int getTu();
    int getMau();
    int getPhanNguyen();
    void setTu(int x);
    void setMau(int x);
    void setPhanNguyen(int x);
    bool operator<(HonSo another);
    bool operator>(HonSo another);
};

PhanSo::PhanSo() {
this->tu=1;
this->mau=1;
}

PhanSo::PhanSo(int a, int b) {
    this->tu=a;
    this->mau=b;
}


PhanSo::PhanSo(float x) {
    this->tu=1;
    this->mau=1;
    while (x!=int(x)) {
        x*=10;
        this->mau*=10;
    }
    this->tu=x;
    int gcd= GCD(this->tu,this->mau);
    this->tu/=gcd;
    this->mau/=gcd;
}

PhanSo::PhanSo(HonSo x) {
    this->tu=x.getPhanNguyen()*x.getMau()+x.getTu();
    this->mau=x.getMau();
    PhanSo a(this->tu,this->mau);
    a.RG();
    this->tu=a.getTu();
    this->mau=a.getMau();
}

istream& operator>>(istream& in, PhanSo &a) {
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator<<(ostream& out, PhanSo a) {
    out << a.tu << "/" << a.mau;
    return out;
}

PhanSo::operator float(){
        return 1.0*this->tu/this->mau;

}

int PhanSo::getTu() {
    return this->tu;
}
int PhanSo::getMau() {
    return this->mau;
}
void PhanSo::setTu(int x) {
    this->tu=x;
}
void PhanSo::setMau(int x) {
    this->mau=x;
}

void PhanSo::RG() {
    int gcd= GCD(this->tu,this->mau);
    this->tu/=gcd;
    this->mau/=gcd;
}

bool PhanSo::operator<(PhanSo another) {
    int gcd=GCD(this->getMau(),another.getMau());
    long long TCM=1ll*(this->getMau()*another.getMau())/gcd;
    return this->getTu()*(TCM/this->getMau())<another.getTu()*(TCM/another.getMau());
}

bool PhanSo::operator>(PhanSo another) {
    int gcd=GCD(this->getMau(),another.getMau());
    long long TCM=1ll*(this->getMau()*another.getMau())/gcd;
    return this->getTu()*(TCM/this->getMau())>another.getTu()*(TCM/another.getMau());
}

HonSo::HonSo() {
    this->songuyen=1;
    this->PS.setTu(1);
    this->PS.setMau(1);
}

HonSo::HonSo(float x) {
    this->songuyen=(int)x;
    this->PS=PhanSo(x-(int)x);
    this->PS.RG();
}

HonSo::HonSo(PhanSo a) {
    this->songuyen=a.getTu()/a.getMau();
    this->PS.setTu(a.getTu()%a.getMau());
    this->PS.setMau(a.getMau());
    this->PS.RG();
}

HonSo::operator float() {
    return 1.0*this->songuyen+1.0*this->PS.getTu()/this->PS.getMau();
}


istream& operator>>(istream& in, HonSo& a) {
    in >> a.songuyen >> a.PS;
    return in;
}

ostream& operator<<(ostream& out, HonSo a) {
    out << a.songuyen << '(' << a.PS << ')';
    return out;
}

int HonSo::getTu() {
    return this->PS.getTu();
}
int HonSo::getMau(){
    return this->PS.getMau();
}
int HonSo::getPhanNguyen() {
    return this->songuyen;
}
void HonSo::setTu(int x) {
    this->PS.setTu(x);
}
void HonSo::setMau(int x) {
    this->PS.setMau(x);
}
void HonSo::setPhanNguyen(int x) {
    this->songuyen=x;
}

bool HonSo::operator<(HonSo another) {
    PhanSo a,b;
    a.setTu(this->getPhanNguyen()*this->getMau() + this->getTu());
    a.setMau(this->getMau());
    a.RG();
    b=PhanSo(another);
    return a<b;
}

bool HonSo::operator>(HonSo another) {
    PhanSo a,b;
    a.setTu(this->getPhanNguyen()*this->getMau() + this->getTu());
    a.setMau(this->getMau());
    a.RG();
    b=PhanSo(another);
    return a>b;
}


int GCD(int a, int b) {
    while (b!=0) {
        int tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int indexPS(PhanSo a[], int l, int r) {
    PhanSo pivot=a[r];
    int left=l, right=r-1;
    while (true) {
        while (left<=right && a[left]<pivot) left++;
        while (left<=right && a[right]>pivot) right--;
        if (left>=right) break;
        swap(a[left],a[right]);
        left++;
        right--;
    }
    swap(a[left],a[r]);
    return left;
}

void sortMangPhanSo(PhanSo a[], int l, int r) {
    if (l<r) {
        int id=indexPS(a,l,r);
        sortMangPhanSo(a,l,id-1);
        sortMangPhanSo(a,id+1,r);
    }
}

int indexHS(HonSo a[], int l, int r) {
    HonSo pivot=a[r];
    int left=l, right=r-1;
    while (true) {
        while (left<=right && a[left]<pivot) left++;
        while (left<=right && a[right]>pivot) right--;
        if (left>=right) break;
        swap(a[left],a[right]);
        left++;
        right--;
    }
    swap(a[left],a[r]);
    return left;
}

void sortMangHonSo(HonSo a[], int l, int r) {
    if (l<r) {
        int id=indexHS(a,l,r);
        sortMangHonSo(a,l,id-1);
        sortMangHonSo(a,id+1,r);
    }
}

int main() {
   	// chuyen phan so sang so thuc
    PhanSo m;
    cin >> m;
    float c = float(m); 
    cout << c << endl;

    // chuyen so thuc sang phan so
    float e;
    cin >> e;
    PhanSo d = PhanSo(e); 
    cout << d << endl;

    // chuyuen hon so sang phan so
    HonSo x;
    cin >> x;
    cout << PhanSo(x) << endl; 

    // chuyen hon so sang so thuc
    HonSo HS;
    cin >> HS;
    cout << float(HS) << endl; 
    
    // chuyen so thuc sang hon so
    float z;
    cin >> z;
    cout << HonSo(z) << endl; 
    
    // chuyen phan so sang hon so
    PhanSo s;
    cin >> s;
    cout << HonSo(s) << endl; 

    // sap xep mang phan so tang dan
    PhanSo a[100];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sortMangPhanSo(a,0,n-1);
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    //sap xep mang hon so tang dan
    HonSo aa[100];
    int nn;
    cin >> nn;
    for (int i=0; i<nn; i++) {
        cin >> aa[i];
    }
    sortMangHonSo(aa,0,nn-1);
    for (int i=0; i<nn; i++) {
        cout << aa[i] << " ";
    }
    cout << endl;
    return 0;
}
