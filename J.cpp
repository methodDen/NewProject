#include <iostream>
#include <string>
using namespace std; 
int main() {
  string s;
  cin >> s;
  int l1 = 0, r1 = s.size() - 1;
  int flag = 0;
  while (l1 < r1) {
    if (s[l1] != s[r1]) {
      flag = 1;
      break;
    }
    l1++;
    r1--;
  }
  if (flag == 1) {
      string t = s + s[0];
      int l = 0, r = t.size() - 1;
      while (l < r) {
        if (t[l] != t[r]) {
        cout << "NO";
        return 0;
      }
      l++;
      r--;
    }
  }
  else {
    cout << "YES";
    return 0;
  }
  

  cout << "YES";
}