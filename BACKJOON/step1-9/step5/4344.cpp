#include <stdio.h>
using namespace std;

int main(void) {
	
	int c;
	scanf("%d", &c);
	
	for(int i = 0; i < c; i++) {
		int n = 0;
		scanf("%d", &n);
		int scoreArr[n], sum = 0;
		float avg = 0, result = 0, cnt = 0;
		for(int j = 0; j < n; j++) {
			scanf("%d", &scoreArr[j]);
			sum += scoreArr[j];
		}
		avg = sum / n;
		for(int j = 0; j < n; j++) {
			if(scoreArr[j] > avg) {
				cnt++;
			}
		}
		
		printf("%.3f%%\n", (100.0/n) * cnt);
	}
	
	return 0;
}