#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  int charInt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
        charInt = (int) s[i];
        charInt -= 32; 
        s[i] = (char) charInt;
    }
  }

  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
  }
}