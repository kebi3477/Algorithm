#include <stdio.h>
using namespace std;

void Ptr(int a) {
	long i, j, cnt;
	
	i = j = 2;
	cnt = 0;
	
	if(a == 1 || a == 2) {
		printf("%d\n", a);
	} else {
		while(j < a) {
			if(cnt == 2) {
				i++;
				cnt = 0;
			}
			j += i;
			cnt++;
		}	
		printf("%ld\n", (cnt==1) ? i*2-1 : i*2);
	}
}

int main(void) {
	
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		Ptr(y - x);	
	}
	
	return 0;
}
