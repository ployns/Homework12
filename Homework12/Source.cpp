#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i <= (2 * x) - 1; i++) {
		for (int j = 1; j <= (2 * x) - 1; j++) {
			if ((i >= j && i + j <= 2 * x) || (j >= i && i + j >= 2 * x)) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
