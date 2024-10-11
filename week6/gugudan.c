#include <stdio.h>

void Showmul(int step);

int main(void) {
	for (int m = 1; m <= 9; m++) {
		printf("\n=== Group %d ===\n", m);
		Showmul(m);
	}

	getch();

	return 0;
}
void Showmul(int step) {
	for (int i = 1; i <= 9; i++) 
		printf("%d * %d = %d\n", i, step, step*i);
}