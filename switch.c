/*
제목: switch
기능: switch문의 연습
파일 이름: switch.c
수정날짜: 20210121
작성자:zlzoneyub
*/

#include <stdio.h>   //헤더파일 선언

int main(void)  //main 함수 시작
{
	int num1;
	printf("입력: \n");
	scanf_s("%d", &num1);

	switch (num1/10)
	{
	case 0:
		printf("0이상 10미만\n");
		break;

	case 1:
		printf("10이상 20미만\n");
		break;

	case 2:
		printf("20이상 30미만\n");
		break;

	default:
		printf("30이상\n");
	}

	return 0;
}