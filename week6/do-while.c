#include <stdio.h>

int main(void) {
	int age;

	printf("Welcome to __The Programe__!\n\n");

	do {
		printf("Enter your age:");
		scanf_s("%d", &age);
		if (age >= 18) {
			printf("Accsess granted!");
			printf("Welcome to the SECREAT section!\n");
			//break;
		}
		else if (age > 0) {
			printf("sorry, you must be 18 or older!\n");
		}
		else {
			printf("Invaild input. Enter a positive number.\n");
		}
	} while (age <= 0); //맞는 나이를 입력할때까지

	printf("Program end.");

	getch();

	return 0;
}