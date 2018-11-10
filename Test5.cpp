#include <iostream>
using namespace std;
int main(){
	int n = 0, ans = 1;
	printf("n‚Ì’l‚ð“ü—Í\n");
	cin >> n;
	for(int k = 1; k <= n; k++){
	ans = ans * k;
	}
	printf("%d", ans);
}