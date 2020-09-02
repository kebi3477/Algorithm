#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

vector< vector<int> > map;
vector<bool> visit;
int cnt = 0;

void dfs(int x) {
	cnt++;
	visit[x] = true;
	
	for(int j = 0; j < map[x].size(); j++) {
		if(!visit[map[x][j]]) dfs(map[x][j]);
	}
}


int main(void) {	
	
	int computer, link;
	
	scanf("%d", &computer);
	scanf("%d", &link);
	visit.resize(computer+1);
	map.resize(computer+1);
	
	for(int i = 0; i < link; i++) {
		int f, t;
		scanf("%d %d", &f, &t);
		map[f].push_back(t);
		map[t].push_back(f);
	}
	
	dfs(1);
	
	printf("%d", cnt - 1);
	
	return 0;
}

