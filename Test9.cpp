#include <iostream>
using namespace std;

void function(){
  static int count = 0;
  count++;
  cout << count;
}

int main() {
  function(); //1���\�������B
  function(); //2���\�������B�����Afunction����static�錾���ĂȂ�������1���\�������B
  return 0;
}