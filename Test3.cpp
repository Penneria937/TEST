#include <iostream>
using namespace std;
int main(){
	int k = 0;
	cout << "�l�����" << endl;
	cin >> k;
	if (k == 2){
		printf("%d�͑f���ł��B\n",k);
		return 0;
	}
	for (int i = 2; i < k; i++){
		if (k % i == 0){
			printf("%d�͑f���ł͂���܂���B\n",k);
			return 0;
		}
		
	}
	printf("%d�͑f���ł��B\n", k);

}