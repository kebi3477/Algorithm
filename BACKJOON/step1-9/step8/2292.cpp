#include <stdio.h>
using namespace std;

int main(void) {
	
	int n, i = 1;
	scanf("%d", &n);
	n--;
	while(n > 0) {
		n -= (6*i);
		i++;
	}	
	printf("%d\n", i);
	
	return 0;
}
