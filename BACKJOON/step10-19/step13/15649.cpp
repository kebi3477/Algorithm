#include <stdio.h>
using namespace std;

int n, m;
bool visit[9];
int num[9];
void dfs(int idx) {
	if(idx >= m) {
		for(int i = 0; i < m; i++) {
			printf("%d ", num[i]);	
		}
		printf("\n");
	} else {
		for(int i = 1; i <= n; i++) {
			if(visit[i]) continue;
			
			visit[i] = true;
			num[idx] = i;
			dfs(idx+1);
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
	dfs(0);
	return 0;
}