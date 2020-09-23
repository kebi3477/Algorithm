#include <stdio.h>
//using namespace std;
int main(void) {	
	int n;
	scanf("%d", &n);
	int num[n], max=-4001, min=4001, count[8001] = {0,};
	double a1=0;
	int a2, a3=0, a4;
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		a1+=num[i];
		if(max < num[i]) max = num[i];
		if(min > num[i]) min = num[i];
	}
	//산술평균
	a1 = (double)a1 / (double)n;
	//범위
	a4 = max - min;
	//카운트 정렬
	int sorted[n], sortCnt=0, maxCnt=0, maxLength=0;
	for(int i = 0; i < n; i++) sorted[i] = 0;
	for(int i = 0; i < n; i++) {
		count[num[i]+4000]++;
	}
	for(int i = 0; i <= max+4000; i++) {
		if(count[i] != 0) {
			//제일 큰 카운트 값 구하기
			if(maxCnt < count[i]) maxCnt = count[i];
			for(int j = 0; j < count[i]; j++) {
				sorted[sortCnt] = i-4000;
				sortCnt++;
			}
		}
	}
	//최빈값
	for(int i = 0; i <= max+4000; i++) {
		if(maxCnt == count[i]) {
			if(maxLength==2) break;
			a3 = i-4000;
			maxLength++;
		}
	}
	//중앙값
	a2 = sorted[n/2];

	printf("%.0f\n", a1);
	printf("%d\n", a2);
	printf("%d\n", a3);
	printf("%d\n", a4);

	return 0;
}