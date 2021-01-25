/*
제목: CelAndFah
기능: 섭씨 화씨 변환
파일 이름: CelAndFah.c
수정날짜: 20210125
작성자:zlzoneyub
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
	printf("화씨로 변환시킬 섭씨온도를 입력하시오.\n");
	scanf_s("%lf", &num1);
	printf("섭씨 %lf도는 화씨 %lf도이다.\n", num1, CelToFah(num1));
	printf("섭씨로 변환시킬 화씨온도를 입력하시오.\n");
	scanf_s("%lf", &num2);
	printf("화씨 %lf도는 섭씨 %lf도이다.\n", num2, FahtoCel(num2));
	return 0;
}

