#include <iostream>
using namespace std;
int main(){
	int k = 0;
	cout << "’l‚ğ“ü—Í" << endl;
	cin >> k;
	if (k == 2){
		printf("%d‚Í‘f”‚Å‚·B\n",k);
		return 0;
	}
	for (int i = 2; i < k; i++){
		if (k % i == 0){
			printf("%d‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n",k);
			return 0;
		}
		
	}
	printf("%d‚Í‘f”‚Å‚·B\n", k);

}