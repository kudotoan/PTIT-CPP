#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int d=1;

struct NhanVien {
    string ma,name,sex,date,adress,masothue,datehopdong;    
};

void chuanhoama(string &a) {
    while (a.length()<5) a='0'+a;
}

void nhap(NhanVien &a) {
    int stt=d++;
    a.ma=to_string(stt);
    chuanhoama(a.ma);
    if (d==2) cin.ignore();
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.date);
    getline(cin,a.adress);
    getline(cin,a.masothue);
    getline(cin,a.datehopdong);
}

void inds(NhanVien a[],int n) {
    for (int i=0; i<n; i++) {
    cout << a[i].ma << " " << a[i].name << " " << a[i].sex << " " << a[i].date << " " << a[i].adress << " " 
    << a[i].masothue << " " << a[i].datehopdong << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}