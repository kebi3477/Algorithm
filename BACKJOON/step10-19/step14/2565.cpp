#include <stdio.h>
using namespace std;
int n, max = 0;

void sort(int* a, int* b) {
	int tmp;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
}

int maxFunc(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	scanf("%d", &n);
	int arr1[n], arr2[n], dp[n];
	for(int i = 0; i < n; i++) {
		dp[i] = 1;
		scanf("%d %d", &arr1[i], &arr2[i]);
	}
	
	sort(arr1, arr2);
	
	for(int i = 1; i < n; i++) {
		for(int j = i-1; j > -1; j--) {
			if(arr2[i] > arr2[j]) {
				dp[i] = maxFunc(dp[i], dp[j]+1);
			}
		}
	}
	for(int i = 0; i < n; i++) {
		max = maxFunc(dp[i], max);
	}
	
	printf("%d\n", n-max);
	
	return 0;
}