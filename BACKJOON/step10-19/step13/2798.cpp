#include <stdio.h>
int main(void) {
	int n, m, sum, black=0;
	scanf("%d %d", &n, &m);
	int card[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			for(int k = j+1; k < n; k++) {
				sum = card[i]+card[j]+card[k];
				if(sum > m) {
					continue;
				} else if(sum == m) {
					black = m;
					break;
				} else {
					if(m-sum < m-black) {
						black = sum;
					}
				}
			}
		}
	}
	
	printf("%d", black);
	return 0;
}