/*
제목: whilewhile
기능: while문의 중첩
파일 이름: whilewhile.c
수정날짜: 20210113
작성자:zlzoneyub
*/

#include <stdio.h>  //헤더파일 선언

int main(void)  //main 함수 시작
{
	int num1 = 0, num2 = 0;
	int result1=0;

	while (num2 < 5)
	{
		while (num1 <= 0)
		{
			printf("0보다 큰 수를 입력(%d번째): ", num2+1);
			scanf_s("%d", &num1);
		}
		result1 += num1;
		num1 = 0;
		num2++;
	}
	printf("총 합은 %d", result1);
	return 0;
}
