#include <stdio.h>
int n, m;
char chess[50][50];

int min(int a, int b) {
	if(a > b) {
		return b;
	} else {
		return a;
	}
}

int checkChess(int y, int x) {
	int bCnt=0, wCnt=0;
	for(int i = y; i < y+8; i++) {
		for(int j = x; j < x+8; j++) {
			int i2 = i-y, j2 = j-x;
			if((i2+j2) % 2 == 0 && chess[i][j] == 'B') {
				wCnt++;
			}
			if((i2+j2) % 2 == 1 && chess[i][j] == 'W') {
				wCnt++;
			}
			if((i2+j2) % 2 == 0 && chess[i][j] == 'W') {
				bCnt++;
			}
			if((i2+j2) % 2 == 1 && chess[i][j] == 'B') {
				bCnt++;
			}
		}
	}
	return min(bCnt, wCnt);
}

int main(void) {
	int minResult;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf(" %c", &chess[i][j]);
		}
	}
	for(int i = 0; i < n-7; i++) {
		for(int j = 0; j < m-7; j++) {
			if(i==0 && j==0) {
				minResult = checkChess(i, j);
			} else {
				minResult = min(minResult, checkChess(i, j));
			}
		}	
	}
	printf("%d", minResult);
	return 0;
}