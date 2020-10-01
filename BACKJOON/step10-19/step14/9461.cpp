#include <stdio.h>
using namespace std;
long long num[101];
void fibonacci(int n) {
	if(n < 3) {
		num[n] = 1;
	} else if(n < 5) {
		num[n] = 2;
	} else {
		num[n] = num[n-1] + num[n-5];
	}
}

int main(void) {
	int t, n;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++) {
		scanf("%d", &n);
		
		for(int j = 0; j < n; j++) {
			fibonacci(j);
		}
		printf("%lli\n", num[n-1]);
	}
	return 0;
}