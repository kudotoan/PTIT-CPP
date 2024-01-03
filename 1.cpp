#include <iostream>
#include <map>
using namespace std;
struct cmp {
    bool operator() (int a, int b) {
        return a > b;
    }
};
int main() {
  map<int,string, cmp> st;
  st.insert({1,"Nguyen"}); // st = {1}
  st.insert({2,"Hello"});
  st.insert({3,"Zbc"});
  cout << "Set content:\n";
  for (auto it = st.begin(); it != st.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  cout << endl;
  return 0;
}