#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	scanf("%d", &n);

	while(n > 1) {
		for(int i = 2; i <= n; i++) {
			if(n % i == 0) {
				n /= i;
				printf("%d ", i);
				break;
			}
		}
	}
	return 0;
}