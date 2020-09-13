#include <stdio.h>
using namespace std;

int main(void) {	
	
	int t, a, b;
	scanf("%d", &t);
	int plus[t];
	
	for(int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		plus[i] = a + b;
	}
	
	for(int i = 0; i < t; i++) {
		printf("%d\n", plus[i]);
	}
	
	return 0;
}