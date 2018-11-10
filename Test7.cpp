#include <iostream>
using namespace std;

int rem[100];
int main(){
	int r = 1;
	double q = 0;
	int input = 0;
	bool loopf = 0;
	printf("100ˆÈ‰º‚Ì’l‚ð“ü—Í\n");
	cin >> input;
	for (int i = 1; i <= input; i++){
		r = (r * 10) % input;
		//printf("r=%d\n",r);
		rem[r] = rem[r] + 1;
		//printf("rem[r]=%d\n",rem[r]);
		for (int j = 1; j <= input && loopf == 0; j++){
			if (rem[0] == 1) loopf = 1;
			if (rem[j] == 2){
				printf("zŠÂ¬”\n");
				loopf = 1;
			}
		}
	}
	//printf("%d\n",r = 1 % input);
	q = 1 / (double)input;
	printf("%f\n",q);
}