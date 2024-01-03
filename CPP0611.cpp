#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
static int d=1;
class SinhVien{
    private:
    string MSV, name, lop, date;
    float gpa;
    public:

    void chuanhoadate() {
        if (this->date[1]=='/') this->date='0'+this->date;
        if (this->date[4]=='/') this->date.insert(this->date.begin()+3,'0');
    }

    friend istream& operator>>(istream& in, SinhVien &a) {
        cin.ignore();
        string ma=to_string(d++);
        while (ma.length()<3) ma='0'+ma;
        a.MSV="B20DCCN"+ma;
        getline(cin,a.name);
        getline(cin, a.lop);
        getline(cin,a.date);
        a.chuanhoadate();
        in >> a.gpa;
        return in;
    }
    friend ostream& operator<<(ostream& out, SinhVien a) {
        out << a.MSV << " " << a.name << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}