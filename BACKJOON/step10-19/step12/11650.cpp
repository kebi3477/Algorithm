#include <stdio.h>
#include <algorithm>
using namespace std;
void swap(int *arr, int *arr2, int a, int b) {
	int tmp = 0 ;
	tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
	
	tmp = arr2[a];
	arr2[a] = arr2[b];
	arr2[b] = tmp;
}

void quickSort(int* x, int* y, int start, int end) {
	int pivot = x[start];
	int left = start+1;
	int right = end;
	int same = start+1;
	
	while(left < right) {
		while(x[left] < pivot) {
			left++;
		}
		while(x[right] > pivot) { 
			right--; 
		}
		
		
		if(left <= right) {
			swap(x, y, left, right);
		}
	}
	if(start < end) {
		swap(x, y, start, right);
		
		quickSort(x, y, start, right-1);
		quickSort(x, y, right+1, end);
	}
	
	return;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int x[n], y[n], sortX[n], sortY[n];
	
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	
	quickSort(x, y, 0, n);
	
	for(int i = 0; i < n; i++) {
		printf("%d %d\n", x[i], y[i]);
	}
	
	return 0;
}