#include <stdio.h>
using namespace std;

int main(void) {
	
	char arr[1000000];
	scanf("%s", &arr);
	int cnt = 0, max = 0, maxPosition = 0, maxCount = 0;
	int countArr[26];
	for(int i = 0; i < 26; i++) countArr[i] = 0;
	while(arr[cnt] != 0) {
		int a;
		if(arr[cnt] > 96) { //소문자
			a = 97;
		} else { //대문자
			a = 65;
		}
		countArr[arr[cnt]-a]++;
		cnt++;
	}
	for(int i = 0; i < 26; i++) {
		if(countArr[i] > max) {
			max = countArr[i];
			maxPosition = i;
		}
	}
	for(int i = 0; i < 26; i++) {
		if(countArr[i] == max) {
			maxCount++;
		}
	}
	if(maxCount > 1) {
		printf("?");
	} else {
		printf("%c\n", maxPosition+65);	
	}
	
		
	
	return 0;
}
