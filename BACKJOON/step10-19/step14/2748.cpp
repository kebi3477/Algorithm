#include <stdio.h>
using namespace std;
long long num[91];
int miniF[18] = {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597};
void fibonacci(int n) {
	if(n <= 1)
		num[n] = n;
	else if(n > 1 && n < 18) 
		num[n] = miniF[n];
	else
		num[n] = num[n-1] + num[n-2];
}

int main(void) {
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i++) {
		fibonacci(i);
	}
	printf("%lli", num[n]);
	return 0;
}