#include <stdio.h>
using namespace std;

int main(void) {
	double r, pi;
	pi = 3.14159265358979323846264338327950288;
	scanf("%lf", &r);
	
	printf("%.6f\n", pi*r*r);
	printf("%.6f", 2*r*r);
	
	return 0;
}