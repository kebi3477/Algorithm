#include <stdio.h>
int main(void) {
	int d1, d2, d3;
	double sum=0;
	scanf("%d %d %d", &d1, &d2, &d3);
	sum = d1+d2+d3;
	double abc = sum/2;
	double a, b, c;
	a = abc - d3;
	b = abc - d2;
	c = abc - d1;
	if(a > 0 && b > 0 && c > 0) {
		printf("1\n%.1f %.1f %.1f", a, b, c);
	} else {
		printf("-1");
	}
	return 0;
}