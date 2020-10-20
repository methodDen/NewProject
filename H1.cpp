#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int a[10];
int main() {
  string s;
  cin >> s;
  string nums = "0123456789";
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < nums.size(); j++) {
      if (s[i] == nums[j]) {
        a[s[i] - '0']++;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (a[i] != 0 && a[j] != 0) {
        if (a[i] != a[j]) {
          cout << "NO";
          return 0;
        }
      }
    }
  }

  cout << "YES";
}

// sort (a, a + n)