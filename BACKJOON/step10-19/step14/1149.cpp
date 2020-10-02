#include <stdio.h>
using namespace std;

int min(int a, int b) {
	return a > b ? b : a;	
}

int main(void) {
	int n;
	scanf("%d", &n);
	int r[n], g[n], b[n];
	int rSum=0, gSum=0, bSum=0;
	int rHis=0, gHis=0, bHis=0;
	for(int i = 0; i < n; i++) {
		scanf("%d %d %d", &r[i], &g[i], &b[i]);
	}
	
	for(int i = n-2; i > -1; i--) {
		if(i == n-2) {
			rSum = r[i] + min(g[n-1], b[n-1]);
			gSum = g[i] + min(r[n-1], b[n-1]);
			bSum = b[i] + min(r[n-1], g[n-1]);	
		} else {
			rSum = r[i] + min(gHis, bHis);
			gSum = g[i] + min(rHis, bHis);
			bSum = b[i] + min(rHis, gHis);
		}
		rHis = rSum;
		gHis = gSum;
		bHis = bSum;
	}
	
	printf("%d", min(min(rSum,bSum),min(bSum,gSum)));
	
	return 0;
}