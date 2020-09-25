#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	if(a.first == b.first) {
		return false;
	} else {
		return a.first < b.first;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	vector< pair<int, string> > v;
	
	for(int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}
	
	stable_sort(v.begin(), v.end(), compare);
	
	for(int i = 0; i < n; i++) {
		cout << v[i].first << " " + v[i].second + "\n";
	}
	
	return 0;
}