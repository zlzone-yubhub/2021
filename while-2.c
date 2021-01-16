/*
제목: while-2
기능: while문과 do while문의 연습
파일 이름: while-2.c
수정날짜: 20210117
작성자:zlzoneyub
*/
#include <stdio.h>   //헤더파일 선언

int main(void)  //main 함수 시작
{
	int total = 0, num = 1;

	while (num)
	{
		printf("정수입력(0 tp quit): ");
		scanf_s("%d", &num);
		total += num;

	}
	printf("합계: %d \n", total);
	
	int result1 = 0, num2 = 0;

	printf("0부터 100까지 짝수의 합을 출력합니다.");
	do
	{
		result1 += num2;
		num2 = num2 +2;
	} while (num2 <= 100);
	printf("총합은: %d\n", result1);
	
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