#include <iostream>
using namespace std;
int main(){
	int k = 0;
	cout << "値を入力" << endl;
	cin >> k;
	if (k == 2){
		printf("%dは素数です。\n",k);
		return 0;
	}
	for (int i = 2; i < k; i++){
		if (k % i == 0){
			printf("%dは素数ではありません。\n",k);
			return 0;
		}
		
	}
	printf("%dは素数です。\n", k);

}