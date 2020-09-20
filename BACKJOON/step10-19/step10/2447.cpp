#include <stdio.h>
int n, cnt=0;
using namespace std;
void star(int x, int y, int size) {
	if((x/size) % 3 == 1 && (y/size) % 3 == 1) {
		printf(" ");	
	} else {
		if(size/3 == 0) {
			printf("*");	
		} else {
			star(x, y, size/3);
		}
	}
}
int main(void) {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			star(i, j, n);
		}
		printf("\n");
	}
	return 0;
}