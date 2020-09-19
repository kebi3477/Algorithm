#include <iostream>
#include <stdio.h>

int N = 9;
int MAX = 100;

int GetSum(int *arr) {
	int sum = 0;
	for(int i = 0; i < N; i++) {
		sum += arr[i];
	}
	return sum;
}

int Solution(int *arr) {
	int sum = GetSum(arr);
	
	for(int i = 0; i < N-1; i++) {
		for(int j = i+1; j < N; j++) {
			if(sum - (arr[i] + arr[j]) == MAX) {
				arr[i] = -1;
				arr[j] = -1;
				return 0;
			}
		}
	}
}

int main() {
	int heightArr[9];
	int tmp;
	
	for(int i = 0; i < N; i++) {
		scanf("%d", &heightArr[i]);
	}
	
	Solution(heightArr);
	
	for(int i = 0; i < N-1; i++) {
		for(int j = i+1; j < N; j++) {
			if(heightArr[i] > heightArr[j]) {
				tmp = heightArr[i];
				heightArr[i] = heightArr[j];
				heightArr[j] = tmp;
			}
		}
	}

	for(int i = 2; i < N; i++) {
		printf("%d\n", heightArr[i]);
	}

	return 0;
}