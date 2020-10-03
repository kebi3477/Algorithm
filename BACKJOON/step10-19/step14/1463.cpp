#include <stdio.h>
using namespace std;
int num[1000000], n;
int min(int a, int b) {
	return a < b ? a : b;
}

int main(void) {
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		num[i] = n;
	}
	for(int i = 1; i <= n; i++) {
		int minNum = n;
		if(i == 1) {
			num[i] = 0;
			continue;
		}
		
		if(i % 2 == 0 && i % 3 == 0) {
			minNum = min(num[i/2], num[i/3]) + 1;
		} else {
			if(i % 2 == 0) {
				minNum = min(num[i/2], num[i-1]) + 1;
			} else if(i % 3 == 0) {
				minNum = min(num[i/3], num[i-1]) + 1;
			} else {
				minNum = num[i-1] + 1;
			}	
		}
		num[i] = minNum;
	}

	printf("%d\n", num[n]);
	
	return 0;
}