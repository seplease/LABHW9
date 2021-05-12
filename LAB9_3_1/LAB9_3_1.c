#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int score, total;

	total = 0;
	score = 0;

	printf("Enter a score(-1 for exit):");
	scanf("%d", &score);
	while (score != -1)
	{
		total += score;
		printf("Enter a score(-1 for exit):");
		scanf("%d", &score);
	}
	printf("The total is %d.", total);
}