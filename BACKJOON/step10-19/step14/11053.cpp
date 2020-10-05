#include <stdio.h>
using namespace std;

int maxF(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n+1], dp[n+1], max=0;
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		dp[i] = 0;
	}
	
	dp[n-1] = 1;
	
	for(int i = n-2; i > -1; i--) {
		bool last = true;
		for(int j = i+1; j < n; j++) {
			if(arr[i] < arr[j]) {
				dp[i] = maxF(dp[j]+1, dp[i]);
				last = false;
			}
		}
		if(last) {
			dp[i] = 1; 
		}
	}
	
	for(int i = 0; i < n; i++) {
		if(max < dp[i]) 
			max = dp[i];
	}
	
	printf("%d\n", max);
	
	return 0;
}