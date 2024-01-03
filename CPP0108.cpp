#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

bool checktg(long long n) {
    long long ok=0;
    long long tang=1, giam=1;
    string m=to_string(n);
    long long i=0;
    //check day giam
    while (i<m.length()-1) {
        if (m[i]<=m[i+1]) {
            giam = 0;
            break;
        }
        i++;
    }
    i=0;
    //check day tang
    while (i<m.length()-1) {
        if (m[i]>=m[i+1]) {
            tang = 0;
            break;
        }
        i++;
    }
    if (tang==1 || giam==1) ok = 1; else ok=0;
    if (ok==1) return true;
    return false;
}

int main() {
    long long cnt=0;
    for (long long i=0; i<=1000000000; i++) {
        cnt++;
    }
    cout << cnt;
    return 0;
}










// bool checknt(long long n) {
//     if (n<2) return false;
//     for (long long i=2; i<=sqrt(n); i++) {
//         if (n%i==0) return false;
//     }
//     return true;
// }











// int main() {
//     long long t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         if (n==0 || n==1 ||n==9) {
//             cout << "0" << endl;
//             continue;
//         }
//         if (n==8) {
//             cout << "5" << endl;
//             continue;
//         }
//         long long cnt=0;
//         long long d=pow(10,n-1);
//         long long c=pow(10,n);
//         for (long long i=d; i<c; i++) {
//             if (checktg(i) && checknt(i)) cnt++;
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }