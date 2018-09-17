#include <stdio.h>
#include<stdlib.h>


int main() {

	unsigned int n = 2536184253;
	char *pointy = &n;

	printf("n is %u\n", n );
	printf("hex n is 0x%x\n", n );

	printf("\nevery byte of n in hex\n");
	for (int i = 0; i < 4; i++) {
		printf("%d. 0x%hhx\n", i, *pointy );
		pointy++;
	}
	pointy = &n;

	for (int i = 0; i < 4; i++) {
		(*pointy)++;
		pointy++;
	}
	printf("\nhex n after incrementing each byte by 1 is 0x%x\n", n);
	printf("\ndecimal n after incrementing each byte by 1 is %u\n", n);

	n = 2536184253;
	printf("\nn is %u again\n", n);
	pointy = &n;
	for (int i = 0; i < 4; i++){
		*pointy += 16;
		pointy++;
	}
	printf("\nhex n after incrementing each byte by 16 is 0x%x\n", n);
	printf("\ndecimal n after incrementing each byte by 16 is %u\n", n);
	return 0;
}