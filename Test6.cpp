#include <iostream>
using namespace std;
int main(){
	int n = 0, r = 0, ansn = 1, ansr = 1;
	printf("nCrのnの値を入力\n");
	cin >> n;
	printf("nCrのr(<=n)の値を入力\n");
	cin >> r;
	if (r > n) return -1;
	for(int k = n; k >= n - r + 1; k--){
		ansn = ansn * k;
	}
	for(int k = 1; k <= r; k++){
		ansr = ansr * k;
	}
	printf("%d", ansn / ansr);
}