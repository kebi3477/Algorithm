#include <stdio.h>
using namespace std;
int gcd(int a, int b) {
	if(b == 0) {
		return a;
	} else {
		return gcd(b, a%b);
	}
}

int lcm(int a, int b, int gcdValue) {
	return gcdValue * (a / gcdValue) * (b / gcdValue);
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int gcdValue = gcd(a, b);
	printf("%d\n%d", gcdValue, lcm(a, b, gcdValue));

	return 0;
}