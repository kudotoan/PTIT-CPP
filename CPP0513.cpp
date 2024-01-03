#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct SinhVien{
    string MSV, name, lop, date;
    float GPA;
};
static int cnt=1;

string getma(int x) {
    string ans="B20DCCN";
    string tmp=to_string(x);
    while (tmp.length()<3) tmp='0'+tmp;
    ans+=tmp;
    return ans;
}

void chuanhoa(string &a) {
    if (a[1]=='/') a='0'+a;
    if (a[4]=='/') a.insert(a.begin()+3,'0');
}

void nhap(SinhVien a[], int n) {
    cin.ignore();
   for (int i=0; i<n; i++) {
        a[i].MSV=getma(cnt++);
        getline(cin,a[i].name);
        getline(cin,a[i].lop);
        getline(cin,a[i].date);
        chuanhoa(a[i].date);
        cin >> a[i].GPA;
        cin.ignore();
   } 
}

ostream& operator<<(ostream& out, SinhVien a) {
    out << a.MSV << " " << a.name << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.GPA;
    return out;
}

void in(SinhVien a[], int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}