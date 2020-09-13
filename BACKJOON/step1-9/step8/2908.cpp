#include <stdio.h>
using namespace std;

int reverseNum(int num) {
	int numArr[3], i = 0, reverse = 0;
	for(int i = 0; i < 3; i++) {
		numArr[i] = num % 10;
		num /= 10;
	}	
	reverse = numArr[0]*100 + numArr[1]*10 + numArr[2];
	return reverse;
}

int main(void) {
	
	int a, b, i = 0, sangsu = 0;
	scanf("%d %d", &a, &b);
	a = reverseNum(a);
	b = reverseNum(b);
	sangsu = a > b ? a : b; 
	printf("%d", sangsu);
	
	return 0;
}
