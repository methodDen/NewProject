#include <iostream>
#include <string>
using namespace std;
int main() {
  string s; 
  cin >> s;
  int l = 0, r = s.size()-1;
  while (l < r) {
    if (s[l] != s[r]) {
      cout << "NO";
      return 0;
    }
    l++;
    r--;
  }

  cout << "YES";
}