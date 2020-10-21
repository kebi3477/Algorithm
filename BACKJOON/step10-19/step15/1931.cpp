#include <stdio.h>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

vector< pair<int, int> > vec;

bool compare(pair<int, int> a, pair<int, int> b) {
	if(a.second == b.second) {
		return a.first < b.first;
	} else {
		return a.second < b.second;
	}
}

int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	int n, tmp, cnt=1;
	scanf("%d", &n);
	int f, s;
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &f, &s);
		vec.push_back(make_pair(f, s));
	}
	sort(vec.begin(), vec.end(), compare);

	tmp = vec[0].second;
	for(int i = 1; i < vec.size(); i++) {
		if(tmp <= vec[i].first) {
			tmp = vec[i].second;
			cnt++;
		}
	}
	
	printf("%d", cnt);

	return 0;
}