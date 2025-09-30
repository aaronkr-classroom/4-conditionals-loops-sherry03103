//chuseok.c
#include <stdio.h>

void print_calendar(int);


int main(void) {

	int chuseok_month = 10;
	int chuseok = 6;

	int this_mth = 9;
	int today = 30;
	// :::::::::::::::::::::::::::::::::::::1. 조건문(if, switch):::::::::::::::::::::::::::::::::
	// 조건문 if
	if (this_mth == chuseok_month) {
		printf("Chuseok is coming!");
	}
	else {
		printf("Not Chuseok yet.ㅠㅠ");
	}

	// :::::::::::::::::::::::::::::::::2. 반복문(for, while, do-while)::::::::::::::::::::::::::::::
	// 반복문 for
	for (int i=today; i<31; i++) { //for(1-시작점; 2-조건; 4-증가or감소) { 3-지시문 }
		printf("Today is %d월 %d일!", this_mth, today);
	}


	// ::::::::::::::::::::::::::::::::Another Project:::::::::::::::::::::::::::::
	print_calendar(this_mth);

	return 0;
}

void print_calendar(int this_mth) {
	/*
	30 days has September, April, June, and November
	All the rest have 31, save February is short one.
	*/
	int short_mth = 2, // 2월==28일이나 29일
		mid_mth_1 = 9,
		mid_mth_2 = 4,
		mid_mth_3 = 6,
		mid_mth_4 = 11, //배열을 공부할 때 여러 변수 필요 없다?
		days;

	switch (this_mth) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31; break;

	case 4:
	case 6:
	case 9:
	case 11:
		days = 30; break;

	case 2:
		days = 28; break;
	default:
		printf("That's not a month!");
		return;
	}


	printf("\n*** %d월 ***\n", this_mth); //제목

		for (int i = 1; i <= days; i++) {
			printf("%d\t", i);
			if (i%7==0) { // 7번째에서 줄바꿈
				printf("\n");
		}
	}
}