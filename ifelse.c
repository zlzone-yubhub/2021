/*
����: if else
���: if���� ����
���� �̸�: ifelse.c
������¥: 20210119
�ۼ���:zlzoneyub
*/

#include <stdio.h>   //������� ����

int main(void)  //main �Լ� ����
{
	int num1;

	printf("7 �Ǵ� 9�� ���\n");
	for (num1 = 1; num1 < 100; num1++)
		if(num1%7 == 0 || num1%9 == 0)
			printf("%d\n", num1);

	int num2, num3, result1;
	printf("\n\n�� ���� �Է�:\n");
	scanf_s("%d %d", &num2, &num3);
	
	if (num2 < num3)
		result1 = num3 - num2;
	else
		result1 = num2 - num3;
	
	printf("��� %d\n", result1);

	double num4, num5, num6;
	printf("������ �Է��Ͻÿ�\n");
	scanf_s("%f %f %f", &num4, &num5, &num6);

	double result2 = num4 + num5 + num6 / 3;

	if (result2 >= 90)
		printf("A");
	else if (result2 >= 80)
		printf("B");
	else if (result2 >= 70)
		printf("C");
	else if (result2 >= 50)
		printf("D");
	else 
		printf("F");
	
	int num7, num8, result3 = 0;
	printf("\n\n�� ���� �Է�:\n");
	scanf_s("%d %d", &num7, &num8);

	(num7<num8) ? result3 = num7 - num8 : result3 = num7 - num8;

	printf("��� %d\n", result3);
	
	return 0;
}