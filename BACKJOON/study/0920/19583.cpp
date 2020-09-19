//not clear
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(void) {
	int hour[3], min[3], cnt=0, checkCnt=0, plusCnt=0;
	bool checkFlag, plusFlag;
	for(int i = 0; i < 3; i++) {
		scanf(" %d:%d", &hour[i], &min[i]);
	}
	
	int S = hour[0]*60+min[0];
	int E = hour[1]*60+min[1];
	int Q = hour[2]*60+min[2];
	string nickArr[100], plusArr[100];
	
	for(int i = 0; i < 10; i++) {
		
		int userHour, userMin, userTime;
		string nickName;
		checkFlag = false;
		plusFlag = false;
		
		scanf("%d:%d", &userHour, &userMin);
		cin >> nickName;
		userTime = userHour*60+userMin;
		
		if(userTime <= S) {
			for(int j = 0; j < checkCnt; j++) {
				if(nickArr[j] == nickName) {
					checkFlag = true;
					break;
				}
			}
			if(!checkFlag) {
				nickArr[checkCnt] = nickName;
				checkCnt++;
			}
		} else if(userTime >= E && userTime <= Q) {
			for(int j = 0; j < checkCnt; j++) {
				if(nickArr[j] == nickName) {
					checkFlag = true;
					break;
				}
			}
			if(checkFlag){
				for(int j = 0; j < cnt; j++) {
					cout << "check : " + nickArr[j] + "," + nickName + "\n";
					if(plusArr[j] == nickName) {
						plusFlag = true;
						break;
					}
				}
				if(!plusFlag) {
					plusArr[cnt] = nickName;
					cout << nickName + "\n";
					cnt++;	
				}
			}
		}
		
	}
	printf("%d", cnt);
	
	
	
	return 0;
}