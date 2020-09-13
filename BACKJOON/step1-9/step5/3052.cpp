#include <stdio.h>
using namespace std;

int main(void) {
	
	int arr[10], digit[42], cnt = 0;
	for(int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < 42; i++) digit[i] = 0;
	for(int i = 0; i < 10; i++) {
		digit[arr[i] % 42]++;
	}
	for(int i = 0; i < 42; i++) {
		if(digit[i] > 0) {
			cnt++;
		}
	}
	
	printf("%d", cnt);
	return 0;
}