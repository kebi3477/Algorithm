//카운팅 정렬. 병합 정렬보다 쉬운 것 같다.
#include <stdio.h>
using namespace std;
int main(void) {	
	int n, input, arr[10001];
	scanf("%d", &n);
	
	for(int i = 1; i < 10001; i++) arr[i]=0;
	for(int i = 0; i < n; i++) {
		scanf("%d", &input);
		arr[input]++;
	}
	for(int i = 1; i < 10001; i++) {
		if(arr[i] != 0) {
			for(int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}