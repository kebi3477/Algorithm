#include <stdio.h>
int main(void) {
	
	int n, num, sum, numArr[7], result = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {	
		sum = i;
		num = i;
		for(int j = 0; j < 7; j++) numArr[j] = 0;	
		for(int j = 0; num > 0; j++) {
			numArr[j] = num%10;
			num /= 10;
		}
		for(int j = 0; j < 7; j++) {
			sum+=numArr[j];
		}
		if(n == sum) {
			result = i;
			break;
		}
	}
	
	printf("%d\n", result);
	
	return 0;
}