#include <stdio.h>
#include <string.h>

void encrypt(char* data, char key) {
	//data[i] != '\0'와 i < strlen(data)는 같다
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}
void decrypt(char* data, char key) {
	//data[i] != '\0'와 i < strlen(data)는 같다
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}
int main(void) {
	char plaintext[] = "Hanbat national University";
	char key = 'M';

	printf("Original: %s\n", plaintext);

	encrypt(plaintext, key);
	printf("Encrypt: %s\n", plaintext);

	decrypt(plaintext, key);
	printf("decrypt: %s\n", plaintext);
}