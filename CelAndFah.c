/*
����: CelAndFah
���: ���� ȭ�� ��ȯ
���� �̸�: CelAndFah.c
������¥: 20210125
�ۼ���:zlzoneyub
*/

#include <stdio.h>       

double CelToFah(double num1)
{
	return 1.8 * num1 + 32;
}

double FahtoCel(double num2)
{
	return (num2 - 32) / 1.8;
}

int main(Void)
{
	double num1, num2;
	printf("ȭ���� ��ȯ��ų �����µ��� �Է��Ͻÿ�.\n");
	scanf_s("%lf", &num1);
	printf("���� %lf���� ȭ�� %lf���̴�.\n", num1, CelToFah(num1));
	printf("������ ��ȯ��ų ȭ���µ��� �Է��Ͻÿ�.\n");
	scanf_s("%lf", &num2);
	printf("ȭ�� %lf���� ���� %lf���̴�.\n", num2, FahtoCel(num2));
	return 0;
}

