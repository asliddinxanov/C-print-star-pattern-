#include <stdio.h>
int main(void) {
	int num, look, dan;
	printf("Enter number of rows? ");
	scanf_s("%d", &dan);

	for (num = 1; num <= dan; num++) {
		for (look = dan - num; look > 0; look--)
			printf(" ");
		for (look = 1; look <= num; look++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}