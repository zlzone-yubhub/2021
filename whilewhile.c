/*
����: whilewhile
���: while���� ��ø
���� �̸�: whilewhile.c
������¥: 20210113
�ۼ���:zlzoneyub
*/

#include <stdio.h>  //������� ����

int main(void)  //main �Լ� ����
{
	int num1, num2 = 1;
	int result1=0;

	while (num2 < 6)
	{
		while (num2 <= 0)
		{
			printf("0���� ū ���� �Է�(%d��°): ", num2);
			scanf_s("%d", &num1);
		}
		result1 += num1;
		num1 = 0;
		num2++;
	}
	printf("�� ���� %d", result1);
	return 0;
}