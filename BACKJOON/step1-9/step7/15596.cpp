#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;
	for(int i = 0; i < a.size(); i++) {
		ans += a[i];
	}
	return ans;
}

int main(void) {
	
	std::vector<int> a;
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		int in;
		std::cin >> in;
		a.push_back(in);
	}

	std::cout << sum(a);

	return 0;
}