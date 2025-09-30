//date.c
#include <stdio.h>

int main(void) {
	//2025년 12월 31일을
	//3개의 정수 변수에 나누어서 대입
	int year = 2025, mth = 9, day = 30;
	day++; // 일을 하루 증가시키면 day가 31에서 32로 증가

	if (day >= 30) { //일이 31을 초과하면 1일로 바꾸고 월을 증가시킴
		mth++;
		day = 1;

		if (mth >= 12) { //월이 12를 초과하면 1월로 바꾸고 연도를 증가시킴
			year++;
			mth = 1;
		}
	}

	printf("Date: %d년 %d월 %d일",year, mth, day);


	return 0;
}