#include <stdio.h>
using namespace std;

int main(void) {
	int n;
	long long num[10][103], cnt=0, mod = 1000000000;
	scanf("%d", &n);
	
	for(int i = 1; i < 10; i++) {
		num[i][1] = 1;
	}
	for(int i = 2; i <= n; i++) {
		num[0][i] = num[1][i-1] % mod;
		for(int j = 1; j <= 8; j++) {
			num[j][i] = (num[j-1][i-1]+num[j+1][i-1]) % mod;
		}
		num[9][i] = num[8][i-1] % mod;
	}
	
	for(int i = 0; i < 10; i++) {
		cnt = (cnt + num[i][n]) % mod;
	}
	
	printf("%lld\n", cnt % mod);
	
	return 0;
}