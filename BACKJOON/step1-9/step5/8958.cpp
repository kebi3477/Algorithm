#include <stdio.h>
using namespace std;

int main(void) {
	
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		char quiz[100];
		scanf("%s", quiz);
		char recode;
		int score=0, cnt=0, sum=0;
		for(int j = 0; j < 100; j++) {
			recode = quiz[j];
			if(quiz[j] != 'O' && quiz[j] != 'X') break;
			if(recode == 'O') {
				cnt++;
				
			} else {
				cnt = 0;
			}
			sum += cnt;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}