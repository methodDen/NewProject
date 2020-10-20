#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;

  int maxChar = 0;
  char maxi; 

  for (int i = 0; i < s.size(); i++) {
    if (i == 0) {
      maxChar = (int) s[i];
      maxi = s[i];
    }
    else {
      if (maxChar < (int) s[i]) {
        maxChar = (int) s[i];
        maxi = s[i];
      }
    }
  }

  cout << maxi;
}