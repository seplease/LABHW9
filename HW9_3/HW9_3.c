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
			printf("0보다 큰 수를 입력<%d번째>:", i);
			scanf("%d", &num);
			while (num < 0)
			{
				printf("입력이 잘못되었습니다. 0보다 큰 수를 다시 입력<%d번째>:", i);
				scanf("%d", &num);
				if (num > 0)
					break;
			}
			total += num;
			i++;
		} while (i <= 5);
		printf("입력된 값의 총 합: %d", total);
		break;
	}
}