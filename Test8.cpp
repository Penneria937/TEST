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
	printf("”N“ü—Í\n");
	cin >> year;
	if (leap(year) == 0) {
	printf("%d‚Í‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n",year);
	}else{
	printf("%d‚Í‚¤‚é‚¤”N‚Å‚·\n",year);
	}
}