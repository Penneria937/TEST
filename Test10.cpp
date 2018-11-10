#include <iostream>
using namespace std;

int main(){
  int array[5]={10, 0, 15, 5, 2};
  int max = 0;
  //int maxnum = 0;
  int size = sizeof(array) / sizeof(array[0]);
  //printf("%d\n", size);
  for (int i = 0; i < size; i++){
    if (array[i] > array[max]) max = i;
    //printf("%d\n", array[i]);
  }
  //printf("%d\n", maxnum);
  printf("%d\n", max);
}
