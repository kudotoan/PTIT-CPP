#include <iostream>
#include <cstring>
using namespace std;
int n, a[100]; int check[100];

void print() {
    for (int i=1; i<=n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j=1; j<=n; j++) {
        if (!check[j]) {
            a[i]=j;
            check[j]=1;
            if (i==n) print(); else {
                Try(i+1);
            }
            check[j]=0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        memset(check,0,sizeof(check));
        Try(1);
        cout << endl;
    }
    return 0;
}