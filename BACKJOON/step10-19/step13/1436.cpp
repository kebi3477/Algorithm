#include <stdio.h>

int main(void) {
	int n, cnt=0, num=666, title=0;
	scanf("%d", &n);
		
	while(cnt != n) {
		int sixCnt=0, numCopy=num;
		while(numCopy > 0) {
	 		if(numCopy%10==6) {
				sixCnt++;
			} else if(sixCnt < 3){
				sixCnt=0;
			}
			numCopy/=10;
		}
		if(sixCnt >= 3) {
			title = num;
			cnt++;
		}
		num++;
	}
	printf("%d", title);
	
	return 0;
}