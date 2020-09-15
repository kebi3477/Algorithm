#include <stdio.h>
using namespace std;

int main(void) {
	int n, sum=1;
	scanf("%d", &n);
	if(n!=0) {
		for(int i = 1; i <= n; i++) {
			sum*=i;
		}	
	}
	printf("%d", sum);
	
	return 0;
}