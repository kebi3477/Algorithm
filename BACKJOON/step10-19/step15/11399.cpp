#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	scanf("%d", &n);
	int time[n], sum[n], answer=0;
	for(int i = 0; i < n; i++) {
		scanf("%d", &time[i]);
	}
	sort(time, time + n);

	for(int i = 0; i < n; i++) {
		sum[i] = i != 0 ? sum[i-1] + time[i] : time[i];
		answer += sum[i];
	}
	printf("%d", answer);

	return 0;
}