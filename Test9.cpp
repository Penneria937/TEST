#include <iostream>
using namespace std;

void function(){
  static int count = 0;
  count++;
  cout << count;
}

int main() {
  function(); //1が表示される。
  function(); //2が表示される。もし、function内でstatic宣言してなかったら1が表示される。
  return 0;
}