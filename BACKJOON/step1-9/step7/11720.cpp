#include <stdio.h>
using namespace std;

int main(void) {
	
	int position[26];
	char s[100];
	
	scanf("%s", &s);
	for(int i = 0; i < 26; i++) position[i] = -1;
	for(int i = 0; i < 100; i++) {
		if(s[i] == 0) break;	
		if(position[s[i]-97] == -1) position[s[i]-97] = i;
	}
	for(int i = 0; i < 26; i++) {
		printf("%d\n", position[i]);
	}
	
	return 0;
}
