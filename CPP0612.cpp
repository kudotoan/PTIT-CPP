#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<stdbool.h>
#include<sstream>
#include<iomanip>
using namespace std;
int d=1;
class SinhVien{
    private:
    string MSV, name, lop, date;
    float gpa;
    char name_x[100];
    public:

    SinhVien() {
        MSV=name=lop=date="";
        gpa=0;
    }

    float getGPA() {
        return this->gpa;
    }
    void chuanhoadate() {
        if (this->date[1]=='/') this->date='0'+this->date;
        if (this->date[4]=='/') this->date.insert(this->date.begin()+3,'0');
    }

    void chuanhoaname() {
        string s=this->name;
        stringstream ss(s);
        string tmp;
        string ans="";
        while (ss>>tmp) {
            tmp[0]=toupper(tmp[0]);
            for (int i=1; i<tmp.length();i++) {
                tmp[i]=tolower(tmp[i]);
            }
            ans+=tmp;
            ans+=" ";
        }
        if (ans[ans.length()-1]==' ') ans.erase(ans.end()-1);
        this->name=ans;
    }
    
    friend istream& operator>>(istream& mycin, SinhVien& x) {
    string ma=to_string(d++);
        while (ma.length()<3) ma='0'+ma;
        x.MSV="B20DCCN"+ma;
    scanf(" %[^\n]", x.name_x);
      mycin.ignore();
    char* c = strtok(x.name_x, " ");
    while (c != NULL) {
        for (int i = 1; i < strlen(c); i++) c[i] = tolower(c[i]);
        c[0] = toupper(c[0]);
        x.name += c;
        if (isalpha(c[strlen(c) - 1])) x.name += " ";
        c = strtok(NULL, " ");
    }
    getline(mycin, x.lop);
    getline(mycin, x.date);
    x.chuanhoadate();
    cin >> x.gpa;
    return mycin;
}
    friend ostream& operator<<(ostream& out, SinhVien a) {
        out << a.MSV << " " << a.name << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};
bool cmp(SinhVien a, SinhVien b) {
    return a.getGPA()>b.getGPA();
}
void sapxep(SinhVien a[], int n) {
    sort(a, a+n, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

// #include <iostream>
// #include <string>
// #include <iomanip>
// #include <sstream>
// #include <algorithm>
// using namespace std;
// static int d=1;
// class SinhVien{
//     private:
//     string MSV, name, lop, date;
//     float gpa;
//     public:

//     SinhVien() {
//         MSV=name=lop=date="";
//         gpa=0;
//     }

//     float getGPA() {
//         return this->gpa;
//     }
//     void chuanhoadate() {
//         if (this->date[1]=='/') this->date='0'+this->date;
//         if (this->date[4]=='/') this->date.insert(this->date.begin()+3,'0');
//     }

//     void chuanhoaname() {
//         string s=this->name;
//         stringstream ss(s);
//         string tmp;
//         string ans="";
//         while (ss>>tmp) {
//             tmp[0]=toupper(tmp[0]);
//             for (int i=1; i<tmp.length();i++) {
//                 tmp[i]=tolower(tmp[i]);
//             }
//             ans+=tmp;
//             ans+=" ";
//         }
//         if (ans[ans.length()-1]==' ') ans.erase(ans.end()-1);
//         this->name=ans;
//     }
    
//     friend istream& operator>>(istream& in, SinhVien &a) {
//         cin.ignore();
//         string ma=to_string(d++);
//         while (ma.length()<3) ma='0'+ma;
//         a.MSV="B20DCCN"+ma;
//         getline(cin,a.name);
//         a.chuanhoaname();
//         getline(cin, a.lop);
//         getline(cin,a.date);
//         a.chuanhoadate();
//         in >> a.gpa;
//         return in;
//     }
//     friend ostream& operator<<(ostream& out, SinhVien a) {
//         out << a.MSV << " " << a.name << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
//         return out;
//     }
// };
// bool cmp(SinhVien a, SinhVien b) {
//     return a.getGPA()>b.getGPA();
// }
// void sapxep(SinhVien a[], int n) {
//     sort(a, a+n, cmp);
// }
// int main(){
//     SinhVien ds[50];
//     int N, i;
//     cin >> N;
//     for(i=0;i<N;i++){
//         cin >> ds[i];
//     }
//     sapxep(ds, N);
//     for(i=0;i<N;i++){
//         cout << ds[i];
//     }
//     return 0;
// }