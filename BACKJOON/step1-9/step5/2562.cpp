#include <stdio.h>
using namespace std;

int arr[9];
int max, maxLocation;

void maxFun() {
	for(int i = 0; i < 9; i++) {
		if(max < arr[i]){ 
			max = arr[i];
			maxLocation = i;
		}
	}
}

int main(void) {
	
	for(int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	maxFun();
	
	printf("%d %d", max, maxLocation+1);
	
	return 0;
}