#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,cnt=0,le=0,chan=0;
        
        char c=' ';

        while (c==' ') {
            cin >> n;
            c=getchar();
            cnt ++; 
            if (n%2==0) chan++; else le++;
        }
        
        if ((le>chan && cnt%2!=0) || (chan>le && cnt%2==0)) cout << "YES\n"; else cout << "NO\n";
        
    }
	return 0;
}