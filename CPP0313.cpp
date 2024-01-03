#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string a,b;
    getline(cin,a);
    cin >> b;
    stringstream ss(a);
    string tmp;
    while (ss>>tmp){
        if (tmp!=b) cout << tmp << " ";
    }
	return 0;
}