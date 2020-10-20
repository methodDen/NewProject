#include <iostream> 
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size()-1; i++) {
      if (s[i+1] - s[i] < 0) {
        cout << "NO";;
        return 0;
      }
  }

  cout << "YES";
}