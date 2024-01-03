#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string x,y;
        cin >> x >> y;
        vector <int> a[1005];
        int d=0;
        long long max=0;
        for(int i=x.length()-1; i>=0; i--) {
            for (int k=1; k<=x.length()-1-i; k++) {
                a[d].push_back(0);
            }
            int nho=0;
            for (int j=y.length()-1; j>=0; j--) {
                int temp=(x[i]-'0')*(y[j]-'0')+nho;
                nho=0;
                if (temp>=10) {
                    a[d].push_back(temp%10);
                    nho=temp/10; 
                } else a[d].push_back(temp);
            }
            while (nho!=0) {
                a[d].push_back(nho%10);
                nho/=10;
            }
            if (max<a[d].size()) max=a[d].size();
            d++;
        }

        for (int i=0; i<d; i++) {
            while (a[i].size()<max) a[i].push_back(0);
        }

        int nho=0;
        for (int i=0; i<max; i++) {
            int sum=0;
            for (int j=0; j<d; j++) {
                sum+=a[j][i];
            }
            sum+=nho;
            nho=0;
            if (sum>=10) {
                a[d].push_back(sum%10);
                nho=sum/10;
            } else a[d].push_back(sum);
        }
        while (nho!=0) {
            a[d].push_back(nho%10);
            nho/=10;
        }
        reverse(a[d].begin(),a[d].end());
        for (auto x:a[d]) {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}