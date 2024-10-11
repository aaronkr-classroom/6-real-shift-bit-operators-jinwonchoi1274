#include <stdio.h>

#define FLAG1 0x01	//0000 0001
#define FlAG2 0x02	//0000 0010
#define FlAG3 0x04	//0000 0100
#define FlAG4 0x08	//0000 1000

int main(void) {
	unsigned char status = 0;

	status |= FLAG1; //0000 0001
	printf("After setting FLAG1: %x\n",status);

	status |= FlAG2; //0000 0010
	printf("After setting FLAG2: %x\n", status);

	status &= ~FLAG1; //0000 0100
	printf("After clsearing FLAG1: %x\n", status);

	status ^= FlAG3; //0000 1000
	printf("After toggling FLAG3: %x\n", status);

	status ^= FlAG4; //0000 1000
	printf("After toggling FLAG4: %x\n", status);

	//비트확인
	if (status & FLAG1)printf("FLAG1 is set."); //출력 x
	if (status & FlAG2)printf("FLAG2 is set.");
	if (status & FlAG3)printf("FLAG3 is set.");
	if (status & FlAG4)printf("FLAG4 is set.");
	return 0;
}