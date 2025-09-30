//ch8_homework
/*
* slide 47
Q1, Q2, Q3 작성하고 결과를 콘솔에서 표시하시오
*/

//교수님 스타일
//오류....?

#include <stdio.h>
void print_stars(int);
void Q1(int); //음수/양수 확인
int Q2(int, int);//양수로 변경
void Q3(int);//switch

int main(void) {

	int result = -5;

	print_stars(20);
	printf("Ch8 HW : ");
	print_stars(20);


	Q1(result);
	Q2(result, 1);
	Q3(result);

	return 0;
}

void print_stars(int num) {
	printf("\n");
	for (int i = 0; i <= num; i++) {
		printf("*");
		printf("\n");
	}
}


void Q1(int result) {
	if (result < 0) { 
		result = result * (-1); 
		printf("Ans1) result : 음수\n");
	}
	else {
		printf("Ans1) result : 양수\n");
	}
	printf("Ans1) %d", result);
	return result;

}

void Q2(int result, int print) {
	result = result < 0 ? result * -1 : result;
	if(print)
		printf("Ans2) %d", result);
	return result;
}
void Q3(int result) {
	// 먼저 양수로 변경하기
	result = Q2(result, 0); // -5 대신 5 필요
	switch (result) {
	case 6:
		result = 0;
		break;
	case 5:
		result = 1;
	case 4:
		result = result * 10;
		break;
	}
	printf("Ans3) %d\n", result);
}