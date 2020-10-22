#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void) {
	int n, answer;
	scanf("%d", &n);
	int num[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	sort(num, num + n);

	if(n % 2 == 0) {
		answer = num[0] * num[n-1];
	} else {
		answer = num[n/2] * num[n/2];
	}
	printf("%d", answer);
}