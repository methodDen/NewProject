#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int a[26];
int b[26];
int main() {
  string s, t;
  cin >> s >> t;
  if (s.size() != t.size()) {
    cout << "NO";
    return 0;
  }
  string alfa = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < 26; j++) {
      if (s[i] == alfa[j]) {
          a[s[i] - 'a']++;
      }
      if (t[i] == alfa[j]) {
        b[t[i] - 'a']++;
      }
    }
  }

  for (int i = 0; i < 26; i++) {
    if (a[i] != b[i]) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";


}