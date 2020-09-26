#include <stdio.h>
using namespace std;

int n, m;
int num[9];

void dfs(int index, int start) {
	if(index >= m) {
		for(int i = 0; i < m; i++) {
			printf("%d ", num[i]);
		}
		printf("\n");
	} else {
		for(int i = start; i <= n; i++) {
			num[index] = i;
			dfs(index+1, i);
		}
	}
}

int main(void) {
	scanf("%d %d", &n, &m);
	for(int i = 0; i < 8; i++) {	
		num[i] = 0;
	}
	
	dfs(0, 1);
	return 0;
}