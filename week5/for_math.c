//for_math.c
#include <stdio.h>

int for_sum(int);
int for_mul(int);


int main(void) {
	int sum = 0,
		mul = 1;
	sum = for_sum(sum); //0을 주고 결과를 받기
	printf("Sum result: num = 5, sum = %d\n", sum);

	mul = for_mul(mul); //1을 주고 결과를 받기
	printf("Mul result: num = 5, mul = %d\n", mul);

	return 0;
}

int for_sum(int sum) {
	for (int num = 1; num <= 5; num++) {
		//더하기 전 sum 사용하여 'num + sum = ' 출력
		printf("num(%d) + sum(%d) = ", num, sum);
		//sum+num
		sum = sum + num;
		//연산 후 sum값 출력
		printf("%d\n", sum);
	}
	return sum;
}

int for_mul(int mul) {
	for (int num = 1; num <= 5; num++) {
		//곱하기 전 mul 사용하여 'num * mul = ' 출력
		printf("num(%d) * mul(%d) = ", num, mul);
		//mul*num
		mul = mul * num;
		//연산 후 mul값 출력
		printf("%d\n", mul);
	}
	return mul;
}