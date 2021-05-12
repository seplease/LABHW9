#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int height, weight, idealWeight;
	char ch;

	do
	{
		printf("Enter your height: ");
		scanf("%d", &height);
		idealWeight = height - 110;
		printf("Your ieal weight is %d\n", idealWeight);

		while (getchar() != '\n');

		printf("Do you wanr to continue(y/n)?");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}