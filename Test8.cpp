#include <iostream>
using namespace std;

bool leap(int year){
	if (year % 4 == 0){
		if (year % 100 == 0 && year % 400 != 0){
			return 0;
		}
		return 1;
	}
return 0;
}


int main(){
	int year;
	printf("年入力\n");
	cin >> year;
	if (leap(year) == 0) {
	printf("%dはうるう年ではありません\n",year);
	}else{
	printf("%dはうるう年です\n",year);
	}
}