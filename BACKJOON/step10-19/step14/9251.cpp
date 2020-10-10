#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}

int main(void) {
	string a, b;
	cin >> a >> b;
	int dp[a.size()+1][b.size()+1];
	
	for(int i = 0; i <= a.size(); i++) {
		for(int j = 0; j <= b.size(); j++) {
			dp[i][j] = 0;
		}
	}
	
	for(int i = 1; i <= a.size(); i++) {
		dp[i][0] = 0;
		for(int j = 1; j <= b.size(); j++) {
			if(a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1]+1;	
			} else {
				dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
		}
	}
	
	printf("%d\n", dp[a.size()][b.size()]);
	
	return 0;
}