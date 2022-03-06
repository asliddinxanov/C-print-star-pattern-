#include <stdio.h>
int main(void) {

	int num, look, sum, bac, dan;
	printf("Enter number of row:");
	scanf_s("%d", &dan);


	for (num = 1; num <= dan; num++) {
		for (look = dan - 1; look >= num; look--) {
			printf(" ");
		}

		for (bac = 1; bac <= num; bac++) {
			sum = num % 10;
			printf("%d", sum);
		}
		printf("\n");

	}

	return 0;
}