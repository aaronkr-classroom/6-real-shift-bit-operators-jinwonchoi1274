#include <stdio.h>

int main(void) {
	char* string = "Hanbat National University";

	//strlen() = char �迭�� ���̸� Ȯ���ϴ� �Լ�
	for (int i = 0; i < strlen(string); i++) {
		//a�� ascii �ڵ�� 65
		//A�� ascii �ڵ�� 97
		if (string[i] == 'a') {
			char upper = string[i] - 32;
			printf("Index %d: %c\n", i, upper);
		}
		else if (string[i] == ' ') {
			continue; //��� ����
		}
		else {
			printf("Index %d: %c\n", i, string[i]);
		}
	}
	getch();



	return 0;
}