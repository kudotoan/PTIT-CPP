#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v;
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        for (int i=0; i<v.size()-1; i++) {
            if (v[i]!=0 && v[i]==v[i+1]) {
                v[i]*=2;
                v.erase(v.begin()+i+1);
                v.push_back(0);
            }
        }
        int nho=v.size();
        for (int i=v.size()-1; i>=0; i--) {
            if (v[i]!=0) {
                nho=i;
                break;
            }
        }       
        for (int i=0; i<nho; i++) {
            if (v[i]==0) {
                v.erase(v.begin()+i);
                v.push_back(0);
                i--;
                nho--;
            }
        }
        for (auto x:v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}