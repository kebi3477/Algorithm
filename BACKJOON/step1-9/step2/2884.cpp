#include <stdio.h>
using namespace std;

int main(void) {	
	
	int h, m;
	scanf("%d %d", &h, &m);
	
	if(m - 45 < 0) {
		m = 60+m-45;
		if(h - 1 < 0) {
			h = 23;
		} else {
			h--;
		}
	} else {
		m = m - 45;
	}
	
	
	printf("%d %d", h, m);
	
	return 0;
}