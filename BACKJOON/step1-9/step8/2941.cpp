#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int cnt = 0;
string input;

int main(void) {
	
	cin >> input;
	cnt = input.size();
	for(int i = 0; i < input.size(); i++) {
		if(input[i] == '=') {
			if( input[i-2] == 'd' && input[i-1] == 'z') {
				cnt-=2;	
			} else if(input[i-1] == 'c' || input[i-1] == 's' || input[i-1] == 'z') {
				cnt--;
			}
		} else if(input[i] == '-') {
			if(input[i-1] == 'c' || input[i-1] == 'd') {
				cnt--;
			}
		} else if(input[i] == 'j') {
			if(input[i-1] == 'l' || input[i-1] == 'n') {
				cnt--;
			}
		}
	}
	
	printf("%d", cnt);
	

	return 0;
}
