#include <iostream>

using namespace std;

int main(){

  string s = "hello kbtu world kbtu programming kbtu";
  string t = "kbtu";
  
  size_t f = s.find(t);
  int cnt = 0;
  while(f != string::npos){
    cnt++;  

    // cout << f << " ";

    f = s.find(t, f + t.size());
  }

  cout << cnt << endl;

  return 0;
}