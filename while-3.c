/*
����: while-3
���: for��, while���� do while���� ����
���� �̸�: while-3.c
������¥: 20210118
�ۼ���:zlzoneyub
*/

#include <stdio.h>   //������� ����

int main(void)  //main �Լ� ����
{
	int num1, num2 ;
	int total = 0;

	printf("�� ���� �Է�(ù��° ������ �� �۾ƾ���): \n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	for (; num1 <= num2; num1++)
		total += num1;


	printf("������ %d \n\n", total);
	
	int num3, num4, result1;

	printf("n�� �Է��Ͻÿ�.\n");

	scanf_s("%d", &num3);
	for (result1 = 1, num4 = 1; num4 <= num3; num4++)
		result1 *= num4;

	printf("n!�� %d", result1);
	return 0;

}