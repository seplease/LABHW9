#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, n, count, prime;

	count = 1;
	n = 2;
	do
	{
		i = 2;
		prime = 1;
		while (i < n)
		{
			if (n % i == 0)
			{
				prime = 0;
				break;
			}
			i++;
		}
		if (prime)
		{
			printf("%d��° �Ҽ��� %d\n", count, n);
			count++;
		}
		n++;
	} while (count <= 10);
}