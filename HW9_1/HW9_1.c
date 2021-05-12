#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int result, answer;
	char ch, op;

	op = rand() % 4;

	switch (op)
	{
		case 0:
			answer = rand() % 100 + rand() % 100;
			op = '+';
		case 1:
			answer = rand() % 100 - rand() % 100;
			op = '-';
		case 2:
			answer = rand() % 100 * rand() % 100;
			op = '*';
		case 3:
			answer = rand() % 100 / rand() % 100;
			op = '/';
	}

	do
	{
		srand(time(NULL));
		printf("%d %c %d = ", rand() % 100, op, rand() % 100);
		scanf("%d", &result);

		while (getchar() != '\n');

		if (result == answer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer\n", answer);
		}
		printf("Do you wanr to continue(y/n)?");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}