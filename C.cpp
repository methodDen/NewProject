#include <iostream>
#include <string>
using namespace std;
int main () {
  string s, t;
  cin >> s >> t;
  int e = 0;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      if (s[i + j] == t[j]) {
        e++;
      }

      else {
        e = 0;
        break;
      }
    }

    if (e == t.size()) {
      cout << "YES";
      return 0;
    }
  }


  cout << "NO";

 
}