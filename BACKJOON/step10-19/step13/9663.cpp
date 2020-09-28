#include <stdio.h>
#include <cmath>

using namespace std;
int chess[15];
int n, cnt=0;

bool isPossible(int c) {
	for(int i = 1; i < c; i++) {
		if(chess[i] == chess[c]) {
			return false;
		}
		if(abs(chess[i] - chess[c]) == abs(i - c)) {
			return false;
		}
	}
	return true;
}

void dfs(int row) {
	if(row == n) {
		cnt++;
	} else {
		for(int i = 1; i <= n; i++) {
			chess[row + 1] = i;
			if(isPossible(row+1)) {
				dfs(row+1);
			} else {
				chess[row+1] = 0;
			}
		}
	}
	chess[row] = 0;
}

int main(void) {
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		chess[1] = i;
		dfs(1);
	}
	
	printf("%d", cnt);
	
	return 0;
}