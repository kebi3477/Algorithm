#include <stdio.h>
#include <algorithm>
using namespace std;
int n, arr[101], sol[501], cnt = 0;

int gcd(int a, int b) {
	if(a % b == 0) return b;
	return gcd(b, a%b);
}

int main(void) {
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n);

	int bm = arr[1] - arr[0];
	for(int i = 2; i < n; i++) {
		bm = gcd(bm, arr[i]-arr[i-1]);
	}

	for(int i = 2; i * i <= bm; i++) {
		if(bm % i == 0) {
			sol[cnt++] = i;
			if(i*i != bm) sol[cnt++] = bm / i;
		}
	}

	sol[cnt++] = bm;

	sort(sol, sol+cnt);
	for(int i = 0; i < cnt; i++) {
		printf("%d ", sol[i]);
	}

	return 0;
}