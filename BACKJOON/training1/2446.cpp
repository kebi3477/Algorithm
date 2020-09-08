#include <stdio.h>
using namespace std;

int main(void) {	
	
	int n, length, length2;
	scanf("%d", &n);
	
	for(int i = 0; i < 2*n; i++) {
		if(i == n) continue;
		if(i > n) {
			length = 2*n - i - 1;
			length2 = 2*(n-i)*-1+1;
		} else {
			length = i;
			length2 = 2*n-1 - (i*2);
		}
		for(int j = 0; j < length; j++) {
			printf(" ");	
		}
		for(int j = 0; j < length2; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}