#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a[100000], cnt[100000]={};
        cin >> n;
        int nho=-1,d=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
            if (cnt[a[i]]==2 && d==0) {
                nho=a[i];
                d++;
            }
        }
        cout << nho << endl;
    }
	return 0;
}