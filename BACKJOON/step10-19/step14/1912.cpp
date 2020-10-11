#include <stdio.h>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int sum, maxV, arr[n+1], dp[n+1];
	for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);
	
	dp[0] = 0;
	for(int i = 1; i <= n; i++) {
		dp[i] = max(dp[i-1] + arr[i], arr[i]);
	}
	
	maxV = dp[1];
	for(int i = 1; i <= n; i++) {
		if(maxV < dp[i]) maxV = dp[i];
	}
	
	printf("%d", maxV);
	
	return 0;
}