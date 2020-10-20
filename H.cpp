#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int a[10];
int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < s.size(); j++) {
      if (s[i] == s[j]) {
        a[s[i] - '0']++;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << sqrt(a[i]) << ' ';
  }
}

// sort (a, a + n)