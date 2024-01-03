#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
	int n;
	cin >> n;
	long long ans=0;
	int d=1;
	while (d<=n) {
		long long tmp=1;
		for (int i=1; i<=d; i++) {
			tmp*=i;
		}
		ans+=tmp;
		d++;
	}
	cout << ans;
	return 0;
}