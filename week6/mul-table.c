//mul-table.c
#include <stdio.h>

int main(void) {
	int i, j;

	//위 제목 행 1 ~ 9 출력하기
	printf("    ");//첫열의 공간
	for (i = 1; i <= 9; i++) {
		printf("%4d", i);// %4d = 공간은 4개 있다
	}
	printf("\n");

	//왼쪽으로 오른쪽 선 출력하기
	printf("---------------------------------------------------------------\n");

	//구구단 테이블 출력하기
	for (i = 1; i <= 9; i++) {
		printf("%2d |", i); //행 제목 출력
		for (j = 1; j <= 9; j++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}

	return 0;
}