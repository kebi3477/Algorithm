#include <stdio.h>
using namespace std;
int MAX = 15;
int chess[15][15];
int n, cnt=0;

void clearChess() {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			chess[i][j] = 0;
		}
	}
}

void checkQueen(int x, int y, int count) {
	bool flag = false;
	printf("x : %d,y : %d, count : %d\n", x,y,count);
	if(count == n) {
		cnt++;
		return;
	}
	
	for(int i = 0; i < n; i++) {
		if(flag) break;
		if(chess[x][i] || chess[i][y]) {
			flag = true;
		}
		if(chess[x+i][y+i]) {
			flag = true;
		}
		if(x - i > -1 && y - i > -1) {
			if(chess[x-i][y-i]) {
				flag = true;
			}
		}
		if(x - i > -1) {
			if(chess[x-i][y+i]) {
				flag = true;
			}
		}
		if(y - i > -1) {
			if(chess[x+i][y-i]) {
				flag = true;
			}
		}
	}
	
	// if(count == 0) {
	// 	chess[x][y] = 1;
	// 	count++;
	// 	checkQueen(0, 0, count);
	// }
	
	if(!flag) {
		//printf("y : %d, ", y);
		chess[x][y] = 1;
		count++;
	}
	if(x+1 < n) {
		checkQueen(x+1, y, count);
		//printf("x : %d, ", x);
	} else if (y+1 < n) {
		checkQueen(0, y+1, count);
	}
	
}

int main(void) {
	scanf("%d", &n);
	
	//chess[1][1] = 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			clearChess();
			checkQueen(i, j, 0);
			//chess[i][j] = 0;
		}
	}
	//checkQueen(0, 0, 0);
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", chess[i][j]);
		}
		printf("\n");
	}
	
	printf("cnt : %d", cnt);
	
	return 0;
}