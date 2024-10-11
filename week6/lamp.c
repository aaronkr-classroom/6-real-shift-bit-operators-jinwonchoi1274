#include <stdio.h>

unsigned char LampOff(unsigned char dest, unsigned char bit);
unsigned char LampOn(unsigned char dest, unsigned char bit);

int main(void) {
	unsigned char lamp = 0x7F; //lamp�� ���� (0111 1111)
	printf("Lamp Off!\n");
	printf("%x -> ", lamp);
	lamp = LampOff(lamp, 3); //lamp�� ����(0111 0111)
	printf("%x\n", lamp);

	printf("Lamp On!\n");
	printf("%x ->", lamp);	//lamp �̹� ���� (0111 0111) 0x77
	lamp = LampOn(lamp, 3);	//lamp ����
	printf("%x\n", lamp);

	getch();

	return 0;
}
unsigned char LampOff(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest & ~(0x01 << bit); //AND ���� 0���� ����
	}
	return dest;
}
unsigned char LampOn(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest | (0x01 << bit); //or ����ϸ� 1�� ����
	}
	return dest;
}