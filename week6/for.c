#include <stdio.h>

int main(void) {
	char* string = "Hanbat National University";

	//strlen() = char 배열의 길이를 확인하는 함수
	for (int i = 0; i < strlen(string); i++) {
		//a의 ascii 코드는 65
		//A의 ascii 코드는 97
		if (string[i] == 'a') {
			char upper = string[i] - 32;
			printf("Index %d: %c\n", i, upper);
		}
		else if (string[i] == ' ') {
			continue; //출력 안함
		}
		else {
			printf("Index %d: %c\n", i, string[i]);
		}
	}
	getch();



	return 0;
}