#include <stdio.h>
using namespace std;

int main(void) {	
	
	int test;
	
	scanf("%d", &test);
	
	if(test < 101 && test > 89)
		printf("A");
	else if(test < 90 && test > 79)
		printf("B");
	else if(test < 80 && test > 69)
		printf("C");
	else if(test < 70 && test > 59)
		printf("D");
	else 
		printf("F");
	
	return 0;
}