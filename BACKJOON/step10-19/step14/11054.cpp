#include <stdio.h>
using namespace std;

int maxFunc(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	int n, max=0;
	bool first;
	scanf("%d", &n);
	int arr[n], dp1[n], dp2[n];
	for(int i = 0; i < n; i++) {
		dp1[i] = 1;
		dp2[i] = 1;
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++) {
		first = true;
		for(int j = i+1; j < n; j++) {
			if(arr[i] < arr[j]) {
				dp1[j] = maxFunc(dp1[j], dp1[i]+1);
			} else {
				first = false;
			}
		}
		if(first) dp1[i] = 1;
	}
	
	for(int i = n-1; i > -1; i--) {
		first = true;
		for(int j = i-1; j > -1; j--) {
			if(arr[i] < arr[j]) {
				dp2[j] = maxFunc(dp2[j], dp2[i]+1);
			} else {
				first = false;
			}
		}
		if(first) dp2[i] = 1;
	}
	
	for(int i = 0; i < n; i++) {
		max = maxFunc(dp1[i]+dp2[i], max);
	}
	
	printf("%d\n", max-1);
	
	return 0;
}