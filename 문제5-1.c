/*
����: ���� 5-1
���: ���� 5-1 Ǯ��
���� �̸�: ����5-1.c
������¥: 20210107
�ۼ���:zlzoneyub
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //������� ����

int main(void)  //main �Լ� ����
{
	int area;
	int x1, x2, y1, y2;

	printf("�� ���� �̷�� ���簢���� ���̸� ����Ͽ� ����մϴ�.\n");
	printf("�� ��ܰ� �� �ϴ��� ��ǥ���� ������� �Է��ϼ���.\n");
	printf("��, �� ����� ��ǥ ���� �� �ϴ��� ��ǥ ������ �۾ƾ� �մϴ�.\n\n");
	printf("�� ���� ��ǥ ���� �Է��ϼ��� : \n");
	scanf_s("%d" "%d" "%d" "%d", &x1, &y1, &x2, &y2);
	area = (x2 - x1) * (y2 - y1);

    printf("���簢���� ���� ���� : %d\n\n", area);

	double num1, num2;

	printf("�� ���� �Ǽ��� ��Ģ���� ����� ����Ͽ� ����մϴ�. \n");
	printf("�� ���� �Ǽ��� �Է��ϼ��� : \n\n");
	scanf_s("%lf %lf", &num1, &num2);

	printf("�� �Ǽ��� ��Ģ���� ����� x+y=%f nx-y=%f x*y=%f x/y=%f\n\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	printf("�ƽ�Ű �ڵ�� ��ȯ�ϰ� ���� ������ �Է��Ͻÿ� : ");
	int num3;
	scanf_s("%d", &num3);
	printf("�ƽ�Ű �ڵ� ���� : %c\n\n", num3);
	
    char ch;
	printf("������ ��ȯ�ϰ� ���� �ƽ�Ű �ڵ带 �Է��Ͻÿ� : \n");
	scanf_s("%c", &ch, 1);
	printf("���� ���� : %d \n\n", ch);
	
	return 0;
}