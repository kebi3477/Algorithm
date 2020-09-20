#include <stdio.h>
using namespace std;

int compare(int a, int b, int c) {
	if(a == b) return c;
	else if(a == c) return b;
	else return a;
}

int main(void) {
	
	int x[3], y[3], xResult, yResult;
	for(int i = 0; i < 3; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	xResult = compare(x[0],x[1],x[2]);
	yResult = compare(y[0],y[1],y[2]);
	
	printf("%d %d", xResult, yResult);
	
	return 0;
}