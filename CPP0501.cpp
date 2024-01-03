#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point{
    double x,y;
};

void input(Point &a) {
    cin >> a.x >> a.y;
}

double distance(Point a, Point b) {
    double c=(b.x-a.x)*(b.x-a.x);
    double d=(b.y-a.y)*(b.y-a.y);
    return sqrt(c+d);
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}