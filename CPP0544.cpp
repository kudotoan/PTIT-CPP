#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.141592653589793238
using namespace std;
struct Diem{
    double x,y;
};

double khoangcach(Diem a, Diem b) {
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

bool check(double a, double b, double c) {
    if (a+b<=c) return false;
    if (b+c<=a) return false;
    if (a+c<=b) return false;
    return true;
}

double STG(double a, double b, double c) {
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double bankinh(double a, double b, double c, double S) {
    return (a*b*c)/(4*S);
}

double SHT(double R) {
    return R*R*PI;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Diem a,b,c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double AB, AC, BC;
        AB=khoangcach(a,b);
        AC=khoangcach(a,c);
        BC=khoangcach(b,c);
        if (!check(AB, AC, BC)) {
            cout << "INVALID\n";
            continue;
        }
        double Stg=STG(AB, AC, BC);
        double bk=bankinh(AB, AC, BC, Stg);
        cout << fixed << setprecision(3) << SHT(bk) << endl;
    }
    return 0;
}