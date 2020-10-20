#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  int oddSum = 0;
  int eveSum = 0;
  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 0) {
      eveSum += (int) (s[i] - '0');
    }
    else {
      oddSum += (int) (s[i] - '0');
    }
  }

  if (eveSum == oddSum) cout << "YES";
  else cout << "NO";
}