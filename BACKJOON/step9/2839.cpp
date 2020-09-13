#include <stdio.h>
using namespace std;

int main(void) {
	
	int n, sugar = 0;
	scanf("%d", &n);
	
	while(n > 0) {
		if(n % 5 == 0) {
			n -= 5;
			sugar++;
		} else if(n % 3 == 0) {
			n -= 3;
			sugar++;
		} else if(n > 5) {
			n -= 5;
			sugar++;
		} else {
			sugar = -1;
			break;
		}
	}
	printf("%d", sugar);
	
	return 0;
}
