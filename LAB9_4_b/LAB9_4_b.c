#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, total, i;

	total = 0;

	while (1)
	{
		i = 1;
		while (i <= 5)
		{
			printf("0���� ū ���� �Է�<%d��°>:", i);
			scanf("%d", &num);
			total += num;
			i++;
		}
		printf("�Էµ� ���� �� ��: %d\n", total);
		break;
	}
}