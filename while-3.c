/*
제목: while-3
기능: for문, while문과 do while문의 연습
파일 이름: while-3.c
수정날짜: 20210118
작성자:zlzoneyub
*/

#include <stdio.h>   //헤더파일 선언

int main(void)  //main 함수 시작
{
	int num1, num2 ;
	int total = 0;

	printf("두 정수 입력(첫번째 정수가 더 작아야함): \n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	for (; num1 <= num2; num1++)
		total += num1;


	printf("총합은 %d \n\n", total);
	
	int num3, num4, result1;

	printf("n을 입력하시오.\n");

	scanf_s("%d", &num3);
	for (result1 = 1, num4 = 1; num4 <= num3; num4++)
		result1 *= num4;

	printf("n!은 %d", result1);
	return 0;

}