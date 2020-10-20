#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  string vow = "aeiou";
  int num = 0;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < vow.size(); j++) {
      if (s[i] == vow[j]) { 
        num++;
      }
    }
  }

  cout << num;
}