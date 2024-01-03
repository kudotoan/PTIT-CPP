#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool a[1000005];
   
void sang() {
    memset(a,true,sizeof(a));
    a[0] = false;
    a[1] = false;
	for (int i=0; i<=sqrt(1000005); i++) {
        if (a[i]) {
            for (int j=i*i; j<=1000005; j+=i) {
                a[j]=false;
            }
        }
    }
}

// int check(int n) {
//     if (n<2) return 0;
//     for (int i=2; i<=sqrt(n); i++) {
//         if (n%i==0) return 0;
//     }
//     return 1;
// }

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    sang();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=1; i<=n;i++) {
            if (a[i]) cout << i << " ";
        }
        cout << endl;
    }
	return 0;
}