#include <iostream>
using namespace std;
int main(){
	int n = 0, ans = 1;
	printf("nの値を入力\n");
	cin >> n;
	for(int k = 1; k <= n; k++){
	ans = ans * k;
	}
	printf("%d", ans);
}