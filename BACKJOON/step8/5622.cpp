#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	
	int time = 0;
	string phone;
	cin >> phone;
	
	for(int i = 0; i < phone.size(); i++) {
		int num = phone[i];
		if(num > 79) {
			if(num < 84) {
				time += 8;	
			} else if(num >= 84 && num < 87) {
				time += 9;
			} else if(num <= 90){
				time += 10;
			}
		} else {
			time += (num-56)/3;
		}	
	}
	
	printf("%d", time);

	return 0;
}
