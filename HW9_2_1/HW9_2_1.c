#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int score, total, found, max;
	double average;

	total = 0;
	score = 0;
	found = 0;
	max = 0;

	printf("Enter a score(-1 for exit):");
	scanf("%d", &score);
	while (score != -1)
	{
		total += score;
		printf("Enter a score(-1 for exit):");
		scanf("%d", &score);
		if (score > max)
		{
			max = score;
		}
		found++;
		average = total / (double)found;
	}
	if (found == 0)
	{
		printf("You've enterd 0 students.\n");
		printf("There is no data.\n");
	}
	else
	{
		printf("You've entered %d students.\n", found);
		printf("The total is %d.\n", total);
		printf("The average is %.1f\n", average);
		printf("The best score is %d.\n", max);
	}
}