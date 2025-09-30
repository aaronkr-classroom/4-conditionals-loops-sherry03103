//gugudan.c
#include <stdio.h>

void dan(int);

int main(void) {
	for (int dan = 1; dan <= 9; dan++) {
		printf("*** %d dan: ***\n", dan);
		//내부 for문
		for (int num = 1; num <= 9; num++) {
			printf("%d * %d = %d\n", dan, num, dan * num);
		}
		printf("\n");
	}
	return 0;
}

void dan(int step) {
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", step, i, step*i);
	}
}