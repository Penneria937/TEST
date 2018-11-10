#include <iostream>
#include <string>
using namespace std;

class Person {//publicについてはまだ気にしないで。
public:
  int age;
  void hello(){
    cout << "hello :)\n";
  }
};

int main() {
  Person john;//インスタンス生成
  //Person john = Person();こう書くこともできる。右辺のPerson()はコンストラクタ。
  john.age = 12;//ジョンの年齢に12を代入
  john.hello();//
  printf("I'm %d.\n",john.age);
  return 0;
}
