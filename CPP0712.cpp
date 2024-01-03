#include <iostream>
using namespace std;
int n,k,ok=0, a[100000]={};
void khoitao() {
    for (int i=1; i<=k; i++) a[i]=i;
}
void print() {
    for (int i=1; i<=k; i++) cout << a[i];
    cout << " ";
}

void sinh() {
    int i=k;
    while (a[i]==n-k+i) i--;
    if (i!=0) {
        a[i]++;
        for (int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
    } else ok=1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        khoitao();
        while (!ok) {
        print();
        sinh();
        }
        cout << endl;
    }
    return 0;
}