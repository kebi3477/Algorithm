#include <stdio.h>
using namespace std;
int n, k, coin[10];

int main(void) {
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}
	int value = k, cnt = 0;
	for(int i = n-1; i > -1; i--) {
		if(value >= coin[i]) {
			cnt += value / coin[i];
			value = value % coin[i];
		}
	}
	printf("%d", cnt);

	return 0;
}