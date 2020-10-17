#include <stdio.h>
using namespace std;

int main(void) {
	
	int a, b;
	do {
		scanf("%d %d", &a, &b);
		
		if(a < b && b % a == 0) {
			printf("factor");
		} else if(a > b && a % b == 0) {
			printf("multiple");
		} else if(a != 0 && b != 0){
			printf("neither");
		}
		
		printf("\n");
	} while(a != 0 && b != 0);
	
	return 0;
}