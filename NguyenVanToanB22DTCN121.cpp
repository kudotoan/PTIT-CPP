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
                return dsmh[i];
            }
        }
        monhoc a;
        return a;
    }
    monhoc timmonhoc(int x) {
        for (int i=0; i<this->tongsomon; i++) {
            if (dsmh[i].getmamonhoc()==x) {
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
    void setnhom(int x) {
        this->nhom=x;
    }
    void setsotiet(int x) {
        this->sotiet=x;
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
    void ghitep(string filename) {
        ofstream fout(filename); 
        if (fout.is_open()) {
            fout << "Ma sinh vien: " << this->masv << endl;
            fout << "Ho ten sinh vien: " << this->hoten << endl;
            fout << "Tong so tin chi: " << this->tongtinchi << endl;
            fout << "Tong so mon dang ky: " << this->tongsomdk << endl;
            fout << "Danh sach mon hoc dang ky:" << endl;
            for (int i = 0; i < this->tongsomdk; i++) {
                fout << dsmdk[i].getmamonhoc() << " " << dsmdk[i].getten() << " " << dsmdk[i].getsotinchi() << " " << dsmdk[i].getnhom() <<" " << dsmdk[i].getsotiet() << endl;
            }
        }
    }
    void doctep(string filename, danhsach ds) {
        ifstream fin(filename); 
        if (fin.is_open()) { 
            fin >> this->masv;
            fin.ignore();
            getline(fin,this->hoten);
            fin >> this->tongsomdk;
            this->tongtinchi=0;
            for (int i=0; i<this->tongsomdk; i++) {
                int tmp,nhom;
                fin >> tmp >> nhom;
                monhoc a = ds.timmonhoc(tmp);
                dsmdk[i].setmamonhoc(tmp);
                dsmdk[i].setten(a.getten());
                dsmdk[i].setsotinchi(a.getsotinchi());
                dsmdk[i].setsotiet(dsmdk[i].getsotinchi()*15);
                dsmdk[i].setnhom(nhom);
                this->tongtinchi+=dsmdk[i].getsotinchi();
            }
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
   b.ghitep("output.out");
   sinhviendk c;
   c.doctep("input.in",a);
   c.xemmh();    
}
