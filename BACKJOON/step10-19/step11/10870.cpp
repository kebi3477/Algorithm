#include <stdio.h>
using namespace std;
int sum=0,cnt=0,n;

int fibonacci(int a, int b) {
	cnt++;
	if(cnt == n) {
		return b;
	} else {
		return fibonacci(b, a+b);
	}
}

int main(void) {
	scanf("%d", &n);
	if(n == 0 || n == 1) {
		printf("%d", n);
	} else {
		printf("%d",fibonacci(0, 1));
	}
	return 0;
}