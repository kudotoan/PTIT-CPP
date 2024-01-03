#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
struct date {
    int day,month,year;
};
struct Person {
    string name;
    date NS;
};

istream& operator>>(istream& in, date &a) {
    string tmp;
    in >> tmp;
    stringstream ss(tmp);
    int s[5];
    int i=0;
    string x;
    while (getline(ss,x,'/')) {
        stringstream ss1(x);
        ss1 >> s[i++];
    }
    a.month=s[1];
    a.day=s[0];
    a.year=s[2];
    return in;
}

ostream& operator<<(ostream& out, date a) {
    if (a.day<10) {
        out << '0' << a.day << '/';
    } else out << a.day << '/';

    if (a.month<10) {
        out << '0' << a.month << '/';
    } else out << a.month << '/';
    out << a.year;
    return out;
}

bool operator>(date a, date b) {
    if (a.year<b.year) return true; else 
        if (a.year>b.year) return false;
    if (a.year==b.year) 
        if (a.month<b.month) return true; else 
                if (a.month>b.month) return false;
    if (a.month==b.month) {
        if (a.day<b.day) return true;
    }
    return false;
}

istream& operator>>(istream &in, Person &a) {
    in >> a.name >> a.NS;
    return in;
}

bool cmp(Person a, Person b) {
    return b.NS>a.NS;
}

int main(){
    int n;
    Person list[105];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> list[i];
    }
    sort(list,list+n,cmp);
    cout << list[0].name << endl << list[n-1].name;
    return 0;
}