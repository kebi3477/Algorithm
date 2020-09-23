#include <stdio.h>
//using namespace std;
int main(void) {	
	int n, digit[10], count[10];
	scanf("%d", &n);
	if(n == 0) {
		printf("0");
		return 0;
	}
	for(int i = 0; i < 10; i++) {
		digit[i] = 0;
		count[i] = 0;
	}
	int j = 0;
	while(n > 0) {
		digit[j] = n % 10;
		count[digit[j]]++;
		n /= 10;
		j++;
	}
	
	for(int i = 9; i >= 0; i--) {
		if(count[i] != 0) {
			for(j = 0; j < count[i]; j++) 
				printf("%d", i);	
		}
	}
	
	return 0;
}