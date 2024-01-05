#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;
class thoigian{
    private:
    int gio,phut;
    public:
    thoigian();
    thoigian(int a, int b);    
    void nhapbp();
    void xemmh();
    void rutgon();
    thoigian(const char* a);
    operator char*();
    friend bool operator<(thoigian a, thoigian b);
    thoigian operator+(thoigian another);
    thoigian operator-(thoigian another);
    friend thoigian operator*(thoigian a, int b);
    friend thoigian operator/(thoigian a, int b);
};

thoigian::thoigian() {
    this->gio=0;
    this->phut=0;
}


thoigian::thoigian(int a, int b) {
    this->gio=a;
    this->phut=b;
}

void thoigian::nhapbp() {
    cin >> this->gio >> this->phut;
}

void thoigian::xemmh() {
    cout << this->gio << " gio " << this->phut << " phut ";
}

void thoigian::rutgon() {
    this->gio+=this->phut/60;
    this->phut%=60;
}

thoigian::thoigian(const char* a) {
    string s=a;
    stringstream ss(s);
    string tmp;
    ss >> this->gio;
    ss >> tmp;
    ss >> this->phut;
}

thoigian::operator char*() {
    char s[100];
    char h[100], m[100];
    char nho;
    int i=0;
    int a=this->gio, b=this->phut;
    while (a>0) {
        int tmp=a%10;
        h[i++]=tmp+'0';
        a/=10;
    }
    nho=h[i-1];
    h[i]='\0';
    strrev(h);
    i=0;
    while (b>0) {
        int tmp=b%10;
        m[i++]=tmp+'0';
        b/=10;
    } 
    m[i]='\0';
    strrev(m);
    strcat(s,h);
    strcat(s, " gio ");
    strcat(s,m);
    strcat(s, " phut");
    char* ans=new char[100];
    strcpy(ans,s);
    while (ans[0]!=nho) ans=&ans[1];
    for (int i=0; i<strlen(ans); i++) {
    	if (ans[i]=='t') {
    		ans[++i]='\0';
    		break;
		}
	}
    return ans;
}

bool operator<(thoigian a, thoigian b) {
    if (a.gio<b.gio) return true;
    if (a.gio>b.gio) return false;
    if (a.phut<b.phut) return true;
    return false;
}

thoigian thoigian::operator+(thoigian another) {
    thoigian tmp;
    tmp.gio=this->gio+another.gio;
    tmp.phut=this->phut+another.phut;
    tmp.rutgon();
    return tmp;
}
thoigian thoigian::operator-(thoigian another) {
    int x=this->gio*60+this->phut;
    int y=another.gio*60+another.phut;
    int z=x-y;
    thoigian tmp;
    tmp.gio=z/60;
    tmp.phut=z%60;
    if (tmp.phut<0) tmp.phut*=-1;
    return tmp;
}
thoigian operator*(thoigian a, int b) {
    a.gio*=b;
    a.phut*=b;
    a.rutgon();
    return a;
}
thoigian operator/(thoigian a, int b){
    a.gio/=b;
    a.phut/=b;
    a.rutgon();
    return a;
}

main() {
    thoigian a,b(3,20), c;
    a.nhapbp(); a.xemmh();
    c=thoigian("2 gio 15 phut"); c.xemmh();
    cout << "\n" << (char *)(c);
        if (a<b) cout << "\n a<b";
        else cout << "\na>=b";
        c=a-b; cout << "\na-b="; c.xemmh();
        c=a+b; cout << "\na+b="; c.xemmh();
        c=a*2; c.xemmh(); c=a/2; c.xemmh();
}