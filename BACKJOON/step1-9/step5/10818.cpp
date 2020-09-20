#include <stdio.h>
using namespace std;

int main(void) {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	int min, max;
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++) {
		if(i == 0) {
			min = arr[i];
			max = arr[i];
		} else {
			if(min > arr[i]) 
				min = arr[i];
			if(max < arr[i])
				max = arr[i];
		}
	}
	printf("%d %d", min, max);
	
	return 0;
}