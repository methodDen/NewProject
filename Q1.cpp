#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int n = t.size();
    int k = s.size();
    int lenS = s.size();
    string sConst = s;
    while (k < n) {
      s += sConst;
      k += lenS;
    }    

    // cout << s << ' ' << t;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != t[i]) {
        cout << "NO";
        return 0;
      }
    }
    cout << "YES";

}