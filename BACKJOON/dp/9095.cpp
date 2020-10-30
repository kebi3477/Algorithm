#include <stdio.h>
using namespace std;

int main(void) {
	
	int n, t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		scanf("%d", &n);
		int arr[n+1];
		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 4;
		for(int j = 4; j <= n; j++) {
			arr[j] = arr[j-3] + arr[j-2] + arr[j-1];
		}
		printf("%d\n", arr[n]);
	}

	return 0;
}