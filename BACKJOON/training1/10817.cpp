#include <stdio.h>
using namespace std;

int main(void) {	
	
	int num[3], rank[3];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for(int i = 0; i < 3; i++) {
		rank[i] = 1;
		for(int j = 0; j < i; j++) {
			if(num[i] < num[j]) {
				rank[i]++;
			} else {
				rank[j]++;
			}
		}
	}
	for(int i = 0; i < 3; i++) {
		if(rank[i] == 2){
			printf("%d", num[i]);
			break;
		}		
	}
	return 0;
}