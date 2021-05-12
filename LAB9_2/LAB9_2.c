#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int result;
	char ch;

	do
	{
		srand(time(NULL));
		printf("%d + %d = ", rand() % 100, rand() % 100);
		scanf("%d", &result);

		while (getchar() != '\n');


		if (result == rand() % 100 + rand() % 100)
			printf("Your answer is right.");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer\n", rand() % 100 + rand() % 100);
		}
		printf("Do you wanr to continue(y/n)?");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}