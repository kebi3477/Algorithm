#include <stdio.h>
using namespace std;

int n, m;
int num[9];

void dfs(int index) {
	if(index >= m) {
		for(int i = 0; i < m; i++) {
			printf("%d ", num[i]);
		}
		printf("\n");
	} else {
		for(int i = 1; i <= n; i++) {
			num[index] = i;
			dfs(index+1);
		}
	}
}

int main(void) {
	scanf("%d %d", &n, &m);
	for(int i = 0; i < 8; i++) {	
		num[i] = 0;
	}
	
	dfs(0);
	return 0;
}