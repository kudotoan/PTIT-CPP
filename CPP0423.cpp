#include <iostream>
using namespace std;
const int MAXN=1e7;
int a[MAXN];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
        int cnt=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=k) cnt++;
		} 
        int sum=0;
        for (int i=0; i<cnt; i++) {
            if (a[i]>k) sum++;
        }
        int ans=sum;
		for (int i=1; i<=n-cnt; i++) {
            if (a[i-1]>k) sum--;
            if (a[i+cnt-1]>k) sum++;
            ans=min(ans,sum);
        }
        cout << ans << endl;
	}
}