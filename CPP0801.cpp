#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream INPUT("PTIT.in",ios::in);
    ofstream OUTPUT("PTIT.out", ios::out);
    string tmp;
    while (!INPUT.eof()) {
        getline(INPUT,tmp);
        OUTPUT << tmp << endl;
    }
    INPUT.close();
    OUTPUT.close();
    return 0;
}