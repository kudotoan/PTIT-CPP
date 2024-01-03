#include <iostream>
using namespace std;
int a[1001000]={0};
int main() {
    int n, k, b;
    cin >> n >> k >> b;
    for (int i=1; i<=b; i++) {
        int tmp;
        cin >> tmp;
        a[tmp]=1;
    }
    int sum=0;
    for (int i=1; i<=k; i++) {
        if (a[i]) sum++;
    }
    int ans=sum;
    for (int i=2; i<=n-k+1; i++) {
        if (a[i-1]) sum--;
        if (a[i+k-1]) sum++;
        ans=min(ans,sum);
    }
    cout << ans;
    return 0;
}