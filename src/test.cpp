#include <stdio.h>
using namespace std;
int n;
int sortedArr[1000000];

void merge(int* arr, int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid+1;
	k = left;
	
	//비교 후 sortedArr에 삽입
	while(i <= mid && j <= right) {
		if(arr[i] <= arr[j]) 
			sortedArr[k++] = arr[i++];
		else 
			sortedArr[k++] = arr[j++];
	}
	
	//만약 left가 mid보다 크다면(끝을 의미)
	if(i > mid) {
		for(l=j; l <= right; l++) {
			sortedArr[k++] = arr[l];
		}
	} else {
		for(l=i; l <= mid; l++) {
			sortedArr[k++] = arr[l];
		}
	}
	
	for(l=left; l<=right; l++) {
		arr[l] = sortedArr[l];
	}
	
}
void mergeSort(int* arr, int left, int right) {
	int mid;
	
	if(left < right) {
		mid = (left+right)/2;	
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}
int main(void) {	
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	mergeSort(arr, 0, n-1);
	for(int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}