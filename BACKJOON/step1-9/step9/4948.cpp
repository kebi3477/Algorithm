#include <stdio.h>
using namespace std;

int main(void) {
	
	int n, cnt;
	bool flags;
	while(1) {
		scanf("%d", &n);
		if(n == 0) break;
		cnt = 0;
		for(int i = n+1; i <= 2*n; i++) {
			flags=false;
			if(i == 1) continue;
			for(int j = 2; j*j <= i; j++) {
				if(i % j == 0) {
					flags = true;
					break;
				}
			}	
			if(!flags) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}