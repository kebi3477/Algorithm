#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int cnt = 0;
string input;

int main(void) {
	
	int n, cnt;
	scanf("%d", &n);
	cnt = n;
	for(int i = 0; i < n; i++) {
		int checker[26];
		cin >> input;
		int length = input.size();
		for(int j = 0; j < 26; j++) checker[j] = 0;
		for(int j = 0; j < length; j++) {
			if(input[j+1] == input[j]) {
				continue;
			} else if(checker[input[j]-97] > 0){
				cnt--;
				break;
			} else {
				checker[input[j]-97] = true;
			}
		}
	}
	printf("%d", cnt);

	return 0;
}
