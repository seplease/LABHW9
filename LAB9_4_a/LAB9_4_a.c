#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, total, i;

	total = 0;

	i = 1;
	while (1)
	{
		do
		{
			printf("0���� ū ���� �Է�<%d��°>:", i);
			scanf("%d", &num);
			total += num;
			i++;
		} while (i <= 5);
		printf("�Էµ� ���� �� ��: %d", total);
		break;
	}
}