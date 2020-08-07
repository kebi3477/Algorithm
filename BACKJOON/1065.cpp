#include <iostream>
#include <stdio.h>

int main() {
	int input, hansu;
	
	scanf("%d", &input);
	
	for(int i=1; i<=input; i++) {
		if(i < 100) {
			hansu = i;
		} else if(i == 1000) {
			break;
		} else {
			int arr[3];
			int r = 0;
			int num = i;
			while(r < 3) {
				arr[r] = num % 10;
				num /= 10;
				r++;
			}
			if(arr[0] - arr[1] == arr[1] - arr[2]) {
				hansu++;
			}
		}
	}
	
	printf("%d", hansu);
	return 0;
}