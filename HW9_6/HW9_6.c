#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int money, i;
	const bread = 500;
	const cookie = 700;
	const cola = 400;

	i = 0;
	//�� 500
	//��Ű 700
	//�ݶ� 400

	printf("Enter �ݾ�:");
	scanf("%d", &money);

	for (bread; bread < money; bread += 500)
		for (cookie; cookie < money; cookie += 700)
			for (cola; cola <= money; cola += 400)
				if (bread + cookie + cola == money)
					printf("��: %d ��Ű: %d �ݶ�: %d\n", bread / 500, cookie / 700, cola / 400);
				i++;
}