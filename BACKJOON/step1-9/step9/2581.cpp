#include <stdio.h>
using namespace std;

int main(void) {
	
	int m, n, sum=0, min=0;
	bool flags, minFlags = false;
	scanf("%d %d", &m, &n);
	
	for(int i = m; i < n+1; i++) {
		flags=false;
		if(i == 1) continue;
		
		for(int j = 2; j < i; j++) {
			if(i % j == 0) {
				flags = true;
				break;
			}
		}	
		if(!flags) {
			sum += i;
			if(!minFlags) {
				min = i;
				minFlags = true;
			}
		}
	}
	if(minFlags) {
		printf("%d\n%d", sum, min);	
	} else {
		printf("-1");
	}
	
	return 0;
}