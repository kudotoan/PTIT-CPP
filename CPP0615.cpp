#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int d=1;
class NhanVien{
    private:
    string MNV, name, sex, date, address, MST, dateHD;
    public:
    friend istream& operator>>(istream& in, NhanVien &a) {
        if (d==1) in.ignore();
        a.MNV=string(5-to_string(d).length(),'0')+to_string(d);
        d++;
        getline(in,a.name);
        getline(in,a.sex);
        getline(in,a.date);
        getline(in,a.address);
        getline(in,a.MST);
        getline(in,a.dateHD);
        return in;
    }
    friend ostream& operator<<(ostream& out, NhanVien a) {
        out << a.MNV << " " << a.name << " " << a.sex << " " << a.date << " " << a.address << " " << a.MST << " " << a.dateHD << endl;
        return out;
    }
    friend bool cmp(NhanVien a, NhanVien b);
};

bool cmp(NhanVien a, NhanVien b) {
    string datea=a.date;
    string dateb=b.date;
    stringstream ss(datea);
    stringstream ss1(dateb);
    string daya,montha,yeara,dayb,monthb,yearb;
    getline(ss,montha,'/');
    getline(ss,daya,'/');
    getline(ss,yeara);
    getline(ss1,monthb,'/');
    getline(ss1,dayb,'/');
    getline(ss1,yearb);
    if (yeara<yearb) return true;
    if (yeara>yearb) return false;
    if (montha<monthb) return true;
    if (montha>monthb) return false;
    if (daya<dayb) return true;
    return false;
}

void sapxep(NhanVien a[], int n) {
    sort(a, a+n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}