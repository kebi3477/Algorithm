#include <stdio.h>
using namespace std;
int main(void) {
	while(1) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a==0 && b==0 && c==0) break;
		if(a*a + b*b == c*c) {
			printf("right\n");
		} else if(b*b + c*c == a*a) {
			printf("right\n");
		} else if(c*c + a*a == b*b) {
			printf("right\n");
		} else {
			printf("wrong\n");
		} 
	}
	return 0;
}