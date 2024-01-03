#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <algorithm>
#include <cstdlib>
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

void chuanhoaname(string &a) {
    stringstream ss(a);
    string ans="";
    string tmp;
    while (ss>>tmp) {
        tmp[0]=toupper(tmp[0]);
        for (int i=1; i<tmp.length(); i++) {
            tmp[i]=tolower(tmp[i]);
        }
        ans+=tmp;
        ans+=" ";
    }
    if (ans[ans.length()-1]==' ') {
        ans.erase(ans.begin()+ans.length()-1);
    }
    a=ans;
}

void nhap(SinhVien a[], int n) {
    cin.ignore();
   for (int i=0; i<n; i++) {
        a[i].MSV=getma(cnt++);
        getline(cin,a[i].name);
        chuanhoaname(a[i].name);
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

int index(SinhVien a[], int l, int r) {
    int id=r;
    SinhVien pivot=a[id];
    int left=l, right=r-1;
    while (true) {
        while (left<=right && a[left].GPA>pivot.GPA) left++;
        while (left<=right && a[right].GPA<pivot.GPA) right--;
        if (left>=right) break;
        swap(a[left],a[right]);
        left++;
        right--;
    }
    swap(a[left],a[id]);
    return left;
}

void quicksort(SinhVien a[], int l, int r) {
    if (l<r) {
        int id=index(a,l,r);
        quicksort(a,l,id-1);
        quicksort(a,id+1,r);
    }
}

void sapxep(SinhVien a[], int n) {
    quicksort(a,0,n-1);
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}