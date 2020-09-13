//#include <stdio.h>
#include <iostream>
#include <cstdio>

#define N 10001
bool arr[N];
using namespace std;
int d(int n) {
	int sum = n;
	
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	
	return sum;
}

int main(void) {
	
	for(int i=1; i < N; i++) {
		int idx = d(i);
		
		if(idx <= N) {
			arr[idx] = true;
		}
	}
	
	for(int i=1; i < N; i++) {
		if(!arr[i]) printf("%d\n", i);	
	}

	return 0;
}
