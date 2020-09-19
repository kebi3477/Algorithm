#include <stdio.h>
using namespace std;

int main(void) {
	
	int n;
	scanf("%d", &n);
	int x[n], p[n];
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &p[i]);
	}
	
	bool flag=false;
	for(int i = 0; i < n; i++) {
		int cnt=0, money=0;
		if(flag) break;
		for(int j = 0; j < n; j++) {
			if(j != i) {
				if(money <= x[j]) {
					money += p[j];
					cnt++;
				}
				if(cnt == n-1) {
					flag = true;
				}
			}
		}
	}
	
	if(flag) {
		printf("Kkeo-eok");
	} else {
		printf("Zzz");
	}
	
	return 0;
}