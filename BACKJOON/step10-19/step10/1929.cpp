#include <stdio.h>
using namespace std;

int main(void) {
	
	int m, n, start;
	bool flags;
	scanf("%d %d", &m, &n);
	
	for(int i = m; i < n+1; i++) {
		flags=false;
		if(i == 1) continue;
		for(int j = 2; j*j <= i; j++) {
			if(i % j == 0) {
				flags = true;
				break;
			}
		}	
		if(!flags) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}