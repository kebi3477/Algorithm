#include <stdio.h>
using namespace std;

int main(void) {
	
	int n, sum = 0;
	scanf("%d", &n);
	char str[n];
	scanf("%s", str);
	
	for(int i = 0; i < n; i++) {
		sum += str[i] - 48;
	}
	printf("%d", sum);
	
	return 0;
}
