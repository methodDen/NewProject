#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  int charInt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'z') {
      s[i] = 'a';
    }
    else {
      charInt = (int) s[i];
      charInt += 1;
      s[i] = (char) charInt;
    }
  }

  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
  }
}