#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d0=0,d1=0,d2=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            if (tmp==0) d0++;
            if (tmp==1) d1++;
            if (tmp==2) d2++;
        }
        for (int i=1; i<=d0; i++) cout << "0 ";
        for (int i=1; i<=d1; i++) cout << "1 ";
        for (int i=1; i<=d2; i++) cout << "2 ";
        cout << endl;
    }
	return 0;
}