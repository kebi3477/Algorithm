#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1000000000 + 1;
int numLength;
int count_arr[12];
int operatorCount[4];
int maxResult = -MAX, minResult = MAX;

void DFS(int plus, int minus, int multiply, int divide, int cnt, int sum) {
	if(numLength == cnt) {
		maxResult = max(maxResult, sum);
		minResult = min(minResult, sum);
	}	
	
	if(plus > 0) {
		DFS(plus-1, minus, multiply, divide, cnt+1, sum + count_arr[cnt]);
	}
	if(minus > 0) {
		DFS(plus, minus-1, multiply, divide, cnt+1, sum - count_arr[cnt]);
	}
	if(multiply > 0) {
		DFS(plus, minus, multiply-1, divide, cnt+1, sum * count_arr[cnt]);
	}
	if(divide > 0) {
		DFS(plus, minus, multiply, divide-1, cnt+1, sum / count_arr[cnt]);
	}
}

int main(void) {	
	
	scanf("%d", &numLength);	
	
	for(int i=0; i<numLength; i++) {
		scanf("%d", &count_arr[i]);
	} 
	for(int i=0; i<4; i++) {
		scanf("%d", &operatorCount[i]);
	}
	
	DFS(operatorCount[0], operatorCount[1], operatorCount[2], operatorCount[3], 1, count_arr[0]);
	
	printf("%d\n", maxResult);
	printf("%d\n", minResult);
	
	return 0;
}

