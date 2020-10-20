#include <iostream> 
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  int numOfCapitals = 0;
  int numOfSmalls = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'A' && s[i] <='Z') {
      numOfCapitals++;
    }
    else if (s[i] >= 'a' && s[i] <= 'z') {
        numOfSmalls++;
    }
  }

  cout << numOfSmalls << ' ' << numOfCapitals;
}