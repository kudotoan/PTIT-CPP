#include <iostream>
using namespace std;
int a[1050]={};

void khoitao() {
    int x1=0,x2=1;
    a[0]=a[1]=1;
    while (x1 <= 1000 && x2 <= 1000) {
        x1+=x2;
        a[x1]=1;
        x2+=x1;
        a[x2]=1;
    }
}
int main() {
    khoitao();
    int t;
    cin >> t;
    while (t--) {
        int n, s[105];
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }
        for (int i=0; i<n; i++) {
            if (a[s[i]]) cout << s[i] << " ";
        }
        cout <<endl;
    }
    return 0;
}