#include <iostream>
using namespace std;

bool check(int a[]) {
    int dem=0;
    for (int i=0; i<3; i++) {
        if (a[i]==1) dem++;
        if (dem==2) return true;
    }
    return false;
}

int main() {
        int n,a[1005][4];
        cin >> n;
        for (int i=0; i<n; i++) {
            for (int j=0; j<3; j++) {
                cin >> a[i][j];
            }
        }
        int ans=0;
        for (int i=0; i<n; i++) {
            if (check(a[i])) ans++;
        }
        cout << ans;
	return 0;
}