/*
����: switch
���: switch���� ����
���� �̸�: switch.c
������¥: 20210121
�ۼ���:zlzoneyub
*/

#include <stdio.h>   //������� ����

int main(void)  //main �Լ� ����
{
	int num1;
	printf("�Է�: \n");
	scanf_s("%d", &num1);

	switch (num1/10)
	{
	case 0:
		printf("0�̻� 10�̸�\n");
		break;

	case 1:
		printf("10�̻� 20�̸�\n");
		break;

	case 2:
		printf("20�̻� 30�̸�\n");
		break;

	default:
		printf("30�̻�\n");
	}

	return 0;
}