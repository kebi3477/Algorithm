#include <stdio.h>
using namespace std;

int main(void) {	
	
	int minBerger = 2000, minDrink = 2000, menu = 0;
	for(int i = 0; i < 5; i++) {
		scanf("%d", &menu);
		if(menu < minBerger && i < 3) 
			minBerger = menu;
		if(menu < minDrink && i >= 3) 
			minDrink = menu;	
	}
	printf("%d",(minBerger+minDrink)-50);
	
	return 0;
}