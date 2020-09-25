#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if(a.second == b.second) {
		return a.first < b.first;
	} else {
		return a.second < b.second;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	vector< pair<int, int> > v;
	
	for(int i = 0; i < n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x, y));
	}
	
	sort(v.begin(), v.end(), compare);
	
	for(int i = 0; i < n; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}
	
	return 0;
}