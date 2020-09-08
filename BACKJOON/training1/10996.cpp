#include <stdio.h>
using namespace std;

int main(void) {	
	
	int n;
	char str;	
	char str2;
	scanf("%d", &n);
	
	for(int i = 0; i < n*2; i++) {
		
		if(i % 2 == 0) {
			str = ' ';
			str2 = '*';
		} else {
			str = '*';
			str2 = ' ';
		}
		for(int j = 0; j < n; j++) {
			if(j % 2 == 0) {
				printf("%c", str2);
			} else {
				printf("%c", str);
			}
		}
		printf("\n");
	}
	
	return 0;
}