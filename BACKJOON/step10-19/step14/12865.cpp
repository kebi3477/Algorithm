#include <stdio.h>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	int w[n+1], v[n+1], dp[n+1][k+1];
	for(int i = 1; i <= n; i++) {
		scanf("%d %d", &w[i], &v[i]);
	}
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= k; j++) {
			dp[i][j] = 0;
		}
	}
	
	w[0] = 0;
	v[0] = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= k; j++) {
			if(j >= w[i]) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
			} else {
				dp[i][j] = dp[i-1][j];
			}
		}	
	}
	
	printf("%d", dp[n][k]);
	
	return 0;
}