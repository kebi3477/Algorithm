#include <stdio.h>
using namespace std;
int num[1000001];
void fibonacci(int n) {
	if(n <= 3)
		num[n] = n;
	else 
		num[n] = (num[n-1] + num[n-2]) % 15746;
}

int main(void) {
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i++) {
		fibonacci(i);
	}
	
	printf("%d", num[n]);
	
	return 0;
}