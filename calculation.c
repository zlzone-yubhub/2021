/*
����: ������ ������
���: ���� ����� ������ ���
���� �̸�: calculation.c
������¥: 20210104
�ۼ���:zlzoneyub
*/
#include <stdio.h>  //������� ����

int main(void)  //main �Լ� ����
{
    /*
    �� �Լ��� ���� ���� �� �������� ����Ѵ�.
    �������� ����ͷ� ��µȴ�.
    */
    int num1 = 348, num2 = 5;  // �������� 
    printf("%d+%d=%d \n", num1, num2, num1 + num2);    
    printf("%d-%d=%d \n", num1, num2, num1 - num2);    
    printf("%d*%d=%d \n", num1, num2, num1 * num2);   
    printf("%d/%d�� ��=%d \n", num1, num2, num1 / num2);
    printf("%d/%d�� ������=%d \n", num1, num2, num1 % num2);  //�پ��� �����ڸ� �̿��� ������ ���
    return 0;  //0�� ��ȯ
} //main�Լ��� ��