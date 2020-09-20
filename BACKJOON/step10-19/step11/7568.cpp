#include <stdio.h>
int main(void) {
	
	int n;
	scanf("%d", &n);
	int x[n], y[n], rank[n];
	for(int i = 0; i < n; i++) {
		rank[i] = 1;
		scanf("%d %d", &x[i], &y[i]);
	}
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(x[i] > x[j] && y[i] > y[j]) {
				rank[j]++;
			} else if(x[i] < x[j] && y[i] < y[j]) {
				rank[i]++;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		printf("%d ", rank[i]);
	}
	
	return 0;
}