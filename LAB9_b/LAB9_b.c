#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int result;

	srand(time(NULL));
	printf("%d + %d = ", rand() % 100, rand() % 100);
	scanf("%d", &result);

	if (result == rand() % 100 + rand() % 100)
	printf("Your answer is right.");
	else
	{
		printf("Your answer is wrong.\n");
		printf("%d is the right answer", rand() % 100 + rand() % 100);
	}
}