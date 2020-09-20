#include <stdio.h>
using namespace std;

int main(void) {
	
	int a, b, v, cnt=0, day=0;
	scanf("%d %d %d", &a, &b, &v);
	if((v-a) % (a-b) == 0) {
		day = (v-a) / (a-b);
	} else {
		day = (v-a) / (a-b) + 1;	
	}
	day++;
	printf("%d", day);
	
	return 0;
}
