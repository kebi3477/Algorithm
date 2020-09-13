#include <stdio.h>
using namespace std;

int getNum(int k, int n) {
	if(n == 1) return 1;
	if(k == 0) return n;
	return (getNum(k-1, n)+getNum(k, n-1));
}

int main(void) {
	
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		int k, n, sum = 0;
		scanf("%d %d", &k ,&n);
		printf("%d\n",getNum(k, n));
	}
	
	return 0;
}
