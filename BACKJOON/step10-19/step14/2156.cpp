#include <stdio.h>
using namespace std;

//bool aFlag=false, bFlag=false, cFlag=false;

int max(int a, int b) {
	return a > b ? a : b;
}
int maxT(int a, int b, int c) {
	int maxValue = max(a, b);	
	return max(maxValue, c);
}

int main(void) {
	int n;
	scanf("%d", &n);
	int grape[n], dp[100000], sum=0;
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &grape[i]);
	}
	
	dp[0] = grape[0];
	dp[1] = grape[0] + grape[1];
	dp[2] = maxT(grape[0]+grape[1],grape[1]+grape[2],grape[0]+grape[2]);
	
	for(int i = 3; i < n; i++) {
		dp[i] = maxT(dp[i-3]+grape[i-1]+grape[i], dp[i-2]+grape[i], dp[i-1]);
		
	}
	
	printf("%d\n", dp[n-1]);	
	
	return 0;
}