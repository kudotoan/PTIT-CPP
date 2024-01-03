#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
static int d=1;
struct date {
    int day,month,year;
};
struct NhanVien {
    string ma, name, sex, address, MSthue;
    date NS, NgayHD;
};

istream& operator>>(istream& in, date &a) {
    string tmp;
    in >> tmp;
    stringstream ss(tmp);
    int s[5];
    int i=0;
    string x;
    while (getline(ss,x,'/')) {
        stringstream ss1(x);
        ss1 >> s[i++];
    }
    a.month=s[0];
    a.day=s[1];
    a.year=s[2];
    return in;
}

ostream& operator<<(ostream& out, date a) {
    if (a.month<10) {
        out << '0' << a.month << '/';
    } else out << a.month << '/';
    if (a.day<10) {
        out << '0' << a.day << '/';
    } else out << a.day << '/';
    out << a.year;
    return out;
}

void nhap(NhanVien &a) {
    if (d==1) cin.ignore();
    string tmp=to_string(d++);
    while (tmp.length() <  5) tmp='0'+tmp;
    a.ma=tmp;
    getline(cin,a.name);
    getline(cin,a.sex);
    cin >> a.NS;
    cin.ignore();
    getline(cin,a.address);
    getline(cin,a.MSthue);
    cin>>a.NgayHD;
    cin.ignore();
}

bool operator>(date a, date b) {
    if (a.year<b.year) return true; else 
        if (a.year>b.year) return false;
    if (a.year==b.year) 
        if (a.month<b.month) return true; else 
                if (a.month>b.month) return false;
    if (a.month==b.month) {
        if (a.day<b.day) return true;
    }
    return false;
}

bool cmp(NhanVien a, NhanVien b) {
    return a.NS>b.NS;
}

void sapxep(NhanVien a[], int n) {
    sort(a,a+n,cmp);
}

void inds(NhanVien a[], int n) {
    for (int i=0; i<n; i++) {
        cout << a[i].ma << " " << a[i].name << " " << a[i].sex << " " << a[i].NS << " " << a[i].address << " " << a[i].MSthue << " " << a[i].NgayHD << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}