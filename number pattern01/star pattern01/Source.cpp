#include <stdio.h>
int main(void) {

	int num, look, dan, sum = 0;
	printf("Enter number of rows:");
	scanf_s("%d", &dan);

	for (num = 1; num <= dan; num++) {
		for (look = num; look <= dan; look++) {
			sum = look % 10;
			printf("%d", sum);
		}
		printf("\n");
	}

	return 0;
}