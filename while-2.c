/*
����: while-2
���: while���� do while���� ����
���� �̸�: while-2.c
������¥: 20210117
�ۼ���:zlzoneyub
*/
#include <stdio.h>   //������� ����

int main(void)  //main �Լ� ����
{
	int total = 0, num = 1;

	while (num)
	{
		printf("�����Է�(0 tp quit): ");
		scanf_s("%d", &num);
		total += num;

	}
	printf("�հ�: %d \n", total);
	
	int result1 = 0, num2 = 0;

	printf("0���� 100���� ¦���� ���� ����մϴ�.");
	do
	{
		result1 += num2;
		num2 = num2 +2;
	} while (num2 <= 100);
	printf("������: %d\n", result1);
	
	int cur = 2, is = 0;

	do
	{
		int is = 1;

		do
		{
			printf("%d*%d=%d \n", cur, is, cur * is);
			is++;
		} while (is != 10);
		
		cur++;
	} while (cur < 10);

	return 0;
}