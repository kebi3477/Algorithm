#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if(a.size() == b.size()) {
		return a < b;
	} else {
		return a.size() < b.size();
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	string str[n], tmp;
	
	for(int i = 0; i < n; i++) {
		cin >> str[i];	
	}
	
	sort(str, str+n, compare);
	
	for(int i = 0; i < n; i++) { 
		if(str[i] == str[i+1]) {
			continue;
		}
		cout << str[i] + "\n";
	}
	
	return 0;
}