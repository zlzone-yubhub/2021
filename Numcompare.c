/*
����: Numcompare
���: ���� ��
���� �̸�: Numcompare.c
������¥: 20210123
�ۼ���:zlzoneyub
*/

#include <stdio.h>

int Numbercompare1(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;
	else 
		return (num2 > num3) ? num2 : num3;

}

int Numbercompare2(int num1, int num2, int num3)
{
	if (num1 < num2)
		return (num1 < num3) ? num1 : num3;
	else
		return (num2 < num3) ? num2 : num3;

}

int main(void)
{
	int num1, num2, num3;
	printf("������ �ٸ� ���� �Է�\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("���߿��� ���� ū ���� %d�̴�.\n", Numbercompare1(num1, num2, num3));
	printf("���߿��� ���� ���� ���� %d�̴�.\n", Numbercompare2(num1, num2, num3));
	return 0;
}