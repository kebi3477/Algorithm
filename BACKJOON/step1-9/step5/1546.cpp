#include <stdio.h>
using namespace std;

int main(void) {
	
	int n;
	scanf("%d", &n);
	float score[n], max, newScore[n], sum = 0;
	for(int i = 0; i < n; i++) {
		scanf("%f", &score[i]);
	}
	max = score[0];
	for(int i = 0; i < n; i++) {
		if(max < score[i])
			max = score[i];
	}
	
	for(int i = 0; i < n; i++) {
		newScore[i] = score[i]/max*100;
		sum += newScore[i];
	}
	
	printf("%f", sum / n);
	
	
	return 0;
}