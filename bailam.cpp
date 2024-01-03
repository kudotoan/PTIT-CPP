#include <iostream>
#include <fstream>
using namespace std;
class monhoc{
    private:
    int mamon;
    string ten;
    int sotinchi;
    public:
    int getmamonhoc() {
        return this->mamon;
    }
    void setmamonhoc(int a) {
        this->mamon=a;
    }
    void setten(string a) {
        this->ten=a;
    }
    void setsotinchi(int a) {
        this->sotinchi=a;
    }
    int getsotinchi() {
        return this->sotinchi;
    }
    string getten() {
        return this->ten;
    }
    void nhapbp() {
        cin >> this->mamon;
        cin.ignore();
        getline(cin,this->ten);
        cin >> this->sotinchi;
    }
    void xemmh() {
        cout << this->mamon << " " << this->ten << " " << this->sotinchi;
    }
};

class danhsach{
    private:
    monhoc dsmh[100];
    int tongsomon;
    public:
    void nhapbp() {
        cin >> this->tongsomon;
        for (int i=0; i<this->tongsomon; i++) {
            this->dsmh[i].nhapbp();
        }
    }
    void xemmh() {
        for (int i=0; i<this->tongsomon; i++) {
            this->dsmh[i].xemmh();
            cout << endl;
        }
    }
    monhoc timmonhoc() {
        cout << "Nhap Ma mon hoc: ";
        int MMH;
        cin >> MMH;
        for (int i=0; i<this->tongsomon; i++) {
            if (dsmh[i].getmamonhoc()==MMH) {
                dsmh[i].xemmh();
                return dsmh[i];
            }
        }
        monhoc a;
        return a;
    }
    monhoc timmonhoc(int x) {
        for (int i=0; i<this->tongsomon; i++) {
            if (dsmh[i].getmamonhoc()==x) {
                dsmh[i].xemmh();
                return dsmh[i];
            }
        }
        monhoc a;
        return a;
    }
};

class monhocdk: public monhoc{
    private:
    int nhom, sotiet;
    public:
    int getnhom() {
        return this->nhom;
    }
    int getsotiet() {
        return this->sotiet;
    }



    void nhapbp(danhsach ds) {
        int tmp;
        cin >> tmp >> this->nhom;
        monhoc a = ds.timmonhoc(tmp);
        this->setmamonhoc(tmp);
        this->setten(a.getten());
        this->setsotinchi(a.getsotinchi());
        this->sotiet=this->getsotinchi()*15;
    }
    void xemmh() {
        cout << this->getmamonhoc() << " " << this->getten() << " " << this->getsotinchi() << " " << this->nhom << " " << this->sotiet;
    }
};
class sinhviendk{
    private:
    string masv;
    string hoten;
    monhocdk dsmdk[100];
    int tongsomdk,tongtinchi; 
    public:
    void nhapbp(danhsach ds) {
        cin >> this->masv;
        cin.ignore();
        getline(cin,this->hoten);
        cin >> this->tongsomdk;
        this->tongtinchi=0;
        for (int i=0; i<this->tongsomdk; i++) {
            dsmdk[i].nhapbp(ds);
            this->tongtinchi+=dsmdk[i].getsotinchi();
        }
    }
    void xemmh() {
        cout << "Ma sinh vien: " << this->masv << endl;
        cout << "Ho ten sinh vien: " << this->hoten << endl;
        cout << "Tong so tin chi: " << this->tongtinchi << endl;
        cout << "Tong so mon dang ky: " << this->tongsomdk << endl;
        cout << "Danh sach mon hoc dang ky:" << endl;
        for (int i = 0; i < this->tongsomdk; i++) {
            dsmdk[i].xemmh();
            cout << endl;
        }
    }
};
int main() {
   danhsach a;
   a.nhapbp();
   a.xemmh();
   sinhviendk b;
   b.nhapbp(a);
   b.xemmh();
}