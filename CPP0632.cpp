#include <iostream>
#include <string>
#include <algorithm>
#include <map>
class KhachHang;
class MatHang;
class HoaDon;
using namespace std;
static int MaKH=1;
static int MaMH=1;
static int MaHD=1;
map <string, KhachHang> KH;
map <string, MatHang> MH;
class KhachHang {
    public:
    string MKH,ten,GT,NS,diachi;
    friend istream &operator>>(istream &in, KhachHang &a) {
        scanf("\n");
        string tmp=to_string(MaKH++);
        a.MKH="KH";
        while (a.MKH.length()+tmp.length()<5) a.MKH+='0';
        a.MKH+=tmp;
        getline(in,a.ten);
        getline(in,a.GT);
        getline(in,a.NS);
        getline(in,a.diachi);
        KH.insert({a.MKH,a});
        return in;
    }
    friend class HoaDon;
};
class MatHang{
    public:
    string MMH, ten, DVT;
    int giamua, giaban;
    friend istream &operator>>(istream &in, MatHang &a) {
        scanf("\n");
        a.MMH="MH";
        string tmp=to_string(MaMH++);
        while (a.MMH.length()+tmp.length()<5) a.MMH+='0';
        a.MMH+=tmp;
        getline(in,a.ten);
        getline(in,a.DVT);
        in >> a.giamua;
        in >> a.giaban;
        MH.insert({a.MMH,a});
        return in;
    }
    friend class HoaDon;
};
class HoaDon{
    public:
    string MHD,MKH,MMH;
    int soluong,loinhuan;
    friend istream &operator>>(istream &in, HoaDon &a) {
        scanf("\n");
        a.MHD="HD";
        string tmp=to_string(MaHD++);
        while (a.MHD.length()+tmp.length()<5) a.MHD+='0';
        a.MHD+=tmp;
        in >> a.MKH >> a.MMH >> a.soluong;
        a.loinhuan=(MH[a.MMH].giaban-MH[a.MMH].giamua)*a.soluong;
        return in;
    }
    friend void sapxep(HoaDon a[], int n);
    friend ostream &operator<<(ostream &out, HoaDon a) {
        cout << a.MHD << " " << KH[a.MKH].ten << " " << KH[a.MKH].diachi << " " << MH[a.MMH].ten << " " << a.soluong << " " << MH[a.MMH].giaban*a.soluong << " " << a.loinhuan << endl;
        return out;
    }
};

bool cmp(HoaDon a, HoaDon b) {
    return a.loinhuan>=b.loinhuan;
}

void sapxep(HoaDon a[], int n) {
    sort(a,a+n,cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}