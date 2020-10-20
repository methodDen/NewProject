#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < t.size(); i += s.size()) {
      for (int j = i; j < i + s.size(); j++) {
        if (t[j] != s[j-i]) {
          cout << s[j] << ' ' << t[j] << endl;
          cout << "NO";
          return 0;
        }
      }
    }

    cout << "YES";
}