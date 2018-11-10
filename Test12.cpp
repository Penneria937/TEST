#include <iostream>
#include <string>
using namespace std;

class Human {
private:
  string name; //インクルードしなきゃ使えないから教えてないけどstringは文字列を代入できる。
public:
  string job;
  void setName(string name){
    name = name;//コンパイラが正しく動いてくれるかどうかは運しだい(わからん←)
    Human::name = name;
    this->name = name;
  }
  /*
    string getter(Human _human){
    string name;
    name = _human.name;
    return name;
  }*/
  string getter(){
    return name;
  }
};

int main() {
  Human human;
  //human.name = "catherine"; //nameはprivateでありHumanクラスの外部からは変更できないのでエラー。
  human.job = "engineer"; //publicなので変更できる
  human.setName("catherine"); //こうすることでnameに名前が代入される
  //cout << human.name; //もちろんエラー
  cout << human.job << endl;
  //cout << human.getter(human) << endl;
  cout << human.getter() << endl;
  return 0;
}
