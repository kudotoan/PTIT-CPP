#include <iostream>
using namespace std;
int snt[100000]={}, s[100000]={}, L=1;
void PTsnt(int n, int x) {
	for (int i=2; i*i<=n; i++) {
		while (n%i==0) {
			snt[i]+=x;
			n/=i;
		}
	}
	if (n!=1) snt[n]+=x;
}

void Multiplication(int x) {
	L+=10;
	for (int i=0; i<L; i++) s[i]*=x;
	for (int i=0; i<L; i++) {
		s[i+1]+=s[i]/10;
		s[i]=s[i]%10;
	}
	while (L>0 && s[L-1]==0) L--;
}

int main() {
	int n;
	cin >> n;
	n++;
	for (int i=1; i<=n; i++) PTsnt(2*n-i+1,1);
	for (int i=2; i<=n+1; i++) PTsnt(i,-1);
	s[0]=1;
	for (int i=2; i<=20000; i++) {
		while (snt[i]) {
			Multiplication(i);
			snt[i]--;
		}
	}
	while (s[L]==0) L--;
	for (int i=L; i>=0; i--) {
		cout << s[i];
	}
	return 0;
}