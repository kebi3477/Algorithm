#include <stdio.h>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int triangle[n][n];
	int sumTri[n];
	
	for(int i = 0; i < n; i++) {
		sumTri[i] = 0;
		for(int j = 0; j <= i; j++) {
			scanf("%d", &triangle[i][j]);
		}		
	}
	
	for(int i = n-2; i > -1; i--) {
		for(int j = 0; j <= i; j++) {
			if(i == n-2) {
				sumTri[j] = triangle[i][j] + max(triangle[i+1][j],triangle[i+1][j+1]);	
			} else {
				sumTri[j] = triangle[i][j] + max(sumTri[j], sumTri[j+1]);
			}
			//printf("%d ", sumTri[j]);
		} 
		//printf("\n");
	}
	
	printf("%d", sumTri[0]);
	return 0;
}