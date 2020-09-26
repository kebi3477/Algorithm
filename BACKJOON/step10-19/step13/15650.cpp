#include <stdio.h>
using namespace std;

int n, m;
int num[9];
bool visit[9];

void dfs(int index, int start) {
	if(index >= m) {
		for(int i = 0; i < m; i++) {
			printf("%d ", num[i]);
		}
		printf("\n");
	} else {
		for(int i = start; i <= n; i++) {
			if(visit[i]) continue;
			visit[i] = true;
			num[index] = i;
			dfs(index+1, i);
			visit[i] = false;
		}
	}
}

int main(void) {
	scanf("%d %d", &n, &m);
	for(int i = 0; i < 8; i++) {	
		num[i] = 0;
		visit[i] = false;
	}
	
	dfs(0, 1);
	return 0;
}