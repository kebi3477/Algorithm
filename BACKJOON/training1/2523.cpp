#include <stdio.h>
using namespace std;

int main(void) {	
	
	int n, length;
	scanf("%d", &n);
	
	for(int i = 1; i < 2*n; i++) {
		if(i <= n) {
			length = i;
		} else {
			length = 2*n - i;
		}
		for(int j = 0; j < length; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}