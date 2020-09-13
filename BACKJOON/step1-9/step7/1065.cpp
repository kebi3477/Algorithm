#include <stdio.h>

using namespace std;

int hansu = 0;
void hansuFunc(int num) {
	int arr[3];
	int sum = 0, recode, diff = 0, i = 0;
	while(num > 0) {
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	if(arr[0] - arr[1] == arr[1] - arr[2]) 
		hansu++;
}

int main(void) {
	
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		if(i < 100) {
			hansu++;
		} else if(i < 1000) {
			hansuFunc(i);
		}	
	}
	
	printf("%d", hansu);
	return 0;
}
