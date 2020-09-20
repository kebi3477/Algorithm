#include <stdio.h>
using namespace std;

int main(void) {
	
	int t = 0;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		int h, w, n, ten, one;
		scanf("%d %d %d", &h, &w, &n);
		if(n == 1) {
			printf("101\n");
			continue;
		}
		if(n % h == 0) {
			ten = h;
			one = n / h;
		} else {
			ten = n % h;	
			one = n / h+1;
		}
		
		printf("%d\n", (ten*100)+one);
	}
	
	return 0;
}
