#include <stdio.h>
using namespace std;

int main(void) {
	
	int t, num;
	bool flags;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		scanf("%d", &num);
		int sosuArr[num], sosuCnt=0;
		for(int j = 0; j < num; j++) sosuArr[j] = 0;
		for(int j = 1; j < num; j++) {
			flags=false;
			if(j == 1) continue;
			for(int k = 2; k*k <= j; k++) {
				if(j % k == 0) {
					flags=true;
					break;
				}	
			}
			if(!flags) {
				sosuArr[sosuCnt] = j;
				sosuCnt++;
			}
		}	
		int cnt=0;
		bool stopFlag = false;
		for(int j = 0; j < num; j++) {
			if(sosuArr[j] == 0) break;
			for(int k = 0; k <= j; k++) {
				if(sosuArr[j] + sosuArr[k] == num) {
					printf("%d %d ", sosuArr[k], sosuArr[j]);
					stopFlag = true;
				}
			}
			if(stopFlag) break;
		}
		printf("\n");
	}
	
	return 0;
}