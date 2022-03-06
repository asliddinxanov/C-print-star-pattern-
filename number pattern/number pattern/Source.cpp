#include <stdio.h>
int main(void) {

	int num, look, dan, sum = 0;
	printf("Enter number rows:");
	scanf_s("%d", &dan);

	for (num = 1; num <= dan; num++) {
		for (look = 1; look <= 2 * dan - 1; look++) {
			if (look >= dan - (num - 1) && look <= dan + (num - 1))
			{
				sum = num % 10;
				printf("%d", sum);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}