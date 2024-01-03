#include <iostream>
using namespace std;
int n,a[25]={};

void print() {
    for (int i=1; i<=n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        a[i]=j;
        if (i==n) print(); else Try(i+1);
    }
}

int main() {
    int t;
    cin >> t;
    int d=0;
    while (t--) {
        if (d++!=0) {
            cout << endl;
        }
        cin >> n;
        Try(1);
    }
    return 0;
}
