#include <stdio.h>
using namespace std;

int main(void) {	
	int in, n[2], plus, recode, cnt = 0;
	scanf("%d", &in);
	recode = in;
	do {
		n[0] = recode % 10;
		n[1] = (recode/10) % 100;
		plus = n[0] + n[1];
		recode = n[0] * 10 + plus % 10;
		cnt++;
	} while(in != recode);
	
	printf("%d", cnt);
	
	return 0;
}