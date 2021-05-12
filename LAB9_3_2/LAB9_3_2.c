#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int score, total;
	
	total = 0;
	score = 0;

	while (1)
	{
		printf("Enter a score(-1 for exit):");
		scanf("%d", &score);
		total += score;
		if (score == -1)
			break;
	}
	printf("The total is %d.", total + 1);
}