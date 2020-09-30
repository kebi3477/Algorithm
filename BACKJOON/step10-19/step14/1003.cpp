#include <stdio.h>
using namespace std;
int num[41];
void fibonacci(int n) {
	if(n <= 1)
		num[n] = n;
	else
		num[n] = num[n-1] + num[n-2];
}

int main(void) {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		if(t == 0) {
			printf("1 0\n");
		} else {
			for(int j = 0; j <= t; j++) {
				fibonacci(j);
			}
			printf("%d %d\n", num[t-1], num[t]);		
		}
	}
	
	return 0;
}