#include <stdio.h>
int main(void) {

	int num, look, dan;
	printf("Enter number rows:");
	scanf_s("%d", &dan);

	for (num = 1; num <= dan; num++) {
		for (look = 1; look <= dan; look++) {
			if (look < num)
				printf("@");
			else
			{
				printf("–");
			}
		}
		printf("\n");
	}

	return 0;
}