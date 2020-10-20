#include <iostream>
using namespace std;

int bratan(int x) {
  if (x == 1) {
    return 1; // function ends
  }
  else {
    return x*bratan(x-1);
  }
}

int main() {

    cout << bratan(7);

}