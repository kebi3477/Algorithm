#include <stdio.h>
using namespace std;

int main(void) {
	
	int a, b, c, avg = 0, i = 0;
	int arr[10], count[10];
	
	scanf("%d %d %d", &a, &b, &c);
	avg = a * b * c;
	
	while(avg > 0) {
	 	arr[i] = avg % 10;
	 	avg /= 10;
		i++;
	}
	
	for(int j = 0; j < 10; j++) {
		count[j] = 0;
	}
	for(int j = 0; j < i; j++) {
		count[arr[j]]++;
	}
	for(int j = 0; j < 10; j++) {
		printf("%d\n", count[j]);
	}
	
	return 0;
}