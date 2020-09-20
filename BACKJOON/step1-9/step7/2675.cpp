#include <stdio.h>
using namespace std;

int main(void) {
	
	int n, sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int r, cnt = 0;
		char s[20];
		scanf("%d %s", &r, &s);
		
		while(s[cnt] != 0) {
			for(int j = 0; j < r; j++) {
				printf("%c",s[cnt]);
			}	
			cnt++;
		}
		printf("\n");
	}
	
	return 0;
}
