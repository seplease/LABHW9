#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num;

	do
	{
		printf("Enter a number(���):");
		scanf("%d", &num);
	} while (num < 0);
	printf("�Էµ� ����� %d", num);
}