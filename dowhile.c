/*
����: do while
���: while���� do while������ ����
���� �̸�: dowhile.c
������¥: 20210116
�ۼ���:zlzoneyub
*/
#include <stdio.h>   //������� ����

int main(void)  //main �Լ� ����
{
	int num1;
	int x = 0;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);

	do
	{
		printf("hello world \n");
		x++;
	} while (x < num1);

	int num2 = 0;
	int x2 = 0;
	printf("\n���� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &num2);

	do
	{
		printf("%d*%d=%d\n", 3, x2, 3 * x2);
	} while (x2++ < num2);

		
	int num3 = 1;
	int result1 = 0;
	printf("\n���ϰ� ���� ������ �Է��Ͻʽÿ�.\n");
	printf("0�� �Է��ϸ� ������ ����մϴ�. \n");

	do
	{
		scanf_s("%d", &num3);
		result1 += num3;
	} while (num3);

	printf("�Էµ� ������ ������ : %d \n", result1);

	int dan = 0, num4 = 10;

	printf("\n�� ��?: ");
	scanf_s("%d", &dan);

	do
	{
		printf(" %d*%d=%d \n", dan, num4, dan * num4);
	} while (--num4);

	int num5, num6;
	int num7 = 0;
	int result2 = 0, result3 = 0;
	printf("\n�� ���� ������ �Է��Ͻʴϱ�? : ");
	scanf_s("%d", &num5);

	do
	{
		scanf_s("%d", &num6);
		result2 += num6;
	} while (num7++ < num5);
	result3 = result2 / num5;
	printf("��հ���?: %f", (double)result3);
	return 0;

}