#include <iostream>
#include <iomanip>
using namespace std;
static int cnt=1;
struct MatHang{
    int MMH;
    string name,group;
    float giamua,giaban,loinhuan;
};

istream& operator>>(istream& in, MatHang &a) {
    a.MMH=cnt++;
    getline(cin,a.name);
    getline(cin,a.group);
    cin >> a.giamua >> a.giaban;
    a.loinhuan=a.giaban-a.giamua;
    cin.ignore();
    return in;
}

ostream& operator<<(ostream& out, MatHang a) {
    out << a.MMH << " " << a.name << " " << a.group << " " << fixed << setprecision(2) << a.loinhuan;
    return out;
}

int partition(MatHang a[], int l, int r) {
    MatHang pivot=a[r];
    int left=l, right=r-1;
    while (true) {
        while (left<=right && a[left].loinhuan>pivot.loinhuan) left++;
        while (left<=right && a[right].loinhuan<pivot.loinhuan) right--;
        if (left>=right) break;
        swap(a[left],a[right]);
        left++;
        right--;
    }
    swap(a[left],a[r]);
    return left;
}

void quicksort(MatHang a[], int l, int r) {
    if (l<r) {
        int id=partition(a,l,r);
        quicksort(a,l,id-1);
        quicksort(a,id+1,r);
    }
}


int main() {
    int n;
    cin >> n;
    MatHang list[1000];
    cin.ignore();
    for (int i=0; i<n; i++) {
        cin >> list[i];
    }
    quicksort(list,0,n-1);
    for (int i=0; i<n; i++) {
        cout << list[i] << endl;
    }
    return 0;
}