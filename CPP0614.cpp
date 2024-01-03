#include <iostream>
#include <string>
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
};


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}