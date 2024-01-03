#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string A01={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    string A02={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        float ans=0;
        if (n==101) {
            for (int i=0; i<15; i++) {
                char tmp;
                cin >> tmp;
                if (tmp==A01[i]) ans+=(float)10/15;
            }
        } else {
            for (int i=0; i<15; i++) {
                char tmp;
                cin >> tmp;
                if (tmp==A02[i]) ans+=(float)10/15;
            }
        }
        cout << fixed << setprecision(2) << ans << endl;
    }
	return 0;
}