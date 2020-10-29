#include <stdio.h>
using namespace std;
int gcd(int a, int b) {
	if(b == 0) return a;
	else return gcd(b, a%b);
}

int main(void) {
	
	int n, first, num, gcdV;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		if(i == 0) {
			first = num;
			continue;
		}
		gcdV = gcd(first, num);
		printf("%d/%d\n", first / gcdV, num / gcdV);
	}

	return 0;
}