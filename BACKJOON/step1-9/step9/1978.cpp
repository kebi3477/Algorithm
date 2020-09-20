#include <stdio.h>
using namespace std;

int main(void) {
	
	int n, num = 0, cnt = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		if(num == 1) {
			cnt++;
			continue;
		}
		for(int j = 2; j < num; j++) {
			if(num % j == 0) {
				cnt++;
				break;
			}
		}	
	}
	printf("%d\n", n-cnt);
	
	return 0;
}