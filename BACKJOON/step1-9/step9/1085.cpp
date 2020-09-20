#include <stdio.h>
using namespace std;

int main(void) {
	
	int x, y, w, h;
	int xMin, yMin;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if(x <= w / 2) {
		xMin = x;
	} else {
		xMin = w-x;
	}

	if(y <= h / 2) {
		yMin = y;
	} else {
		yMin = h-y;
	}

	if(xMin < yMin) {
		printf("%d", xMin);
	} else {
		printf("%d", yMin);
	}
	
	return 0;
}