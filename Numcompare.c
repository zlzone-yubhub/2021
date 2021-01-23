/*
제목: Numcompare
기능: 숫자 비교
파일 이름: Numcompare.c
수정날짜: 20210123
작성자:zlzoneyub
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
	printf("세개의 다른 정수 입력\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("셋중에서 가장 큰 수는 %d이다.\n", Numbercompare1(num1, num2, num3));
	printf("셋중에서 가장 작은 수는 %d이다.\n", Numbercompare2(num1, num2, num3));
	return 0;
}