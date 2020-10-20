#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  char c; 
  int n;
  cin >> s >> c >> n;
  int num = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == c) {
      num++;
    }
  }

  if (num == n) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}