/*
제목: while
기능: while문의 활용
파일 이름: while.c
수정날짜: 20210110
작성자:zlzoneyub
*/
#include <stdio.h>  //헤더파일 선언

int main(void)  //main 함수 시작
{
	int num1;
	int x = 0;
		printf("양의 정수를 입력하시오: \n");
	scanf_s("%d", &num1);
	
	while (x < num1);
	
	{
		printf("helloworld \n");
	    x++;
	}
	return 0;
}