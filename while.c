/*
제목: while
기능: while문의 활용
파일 이름: while.c
수정날짜: 20210111
작성자:zlzoneyub
*/
#include <stdio.h>  //헤더파일 선언

int main(void)  //main 함수 시작
{
	int num1;
	int x = 0;
	printf("양의 정수를 입력하시오: ");
	scanf_s("%d", &num1);
	
	while (x < num1)
	
	{
            printf("hello world \n");
	    x++;
	}

	int num2=0;
	int x2 = 0;
	printf("\n양의 정수를 입력하시오:");
	scanf_s("%d", &num2);
	
	while (x2++ < num2)

	    printf("%d*%d=%d\n", 3, x2, 3 * x2);

	int num3=1;
	int result1=0;
	printf("\n더하고 싶은 정수를 입력하십시오.\n");
	printf("0을 입력하면 총합을 계산합니다. \n");

	while (num3)
	{  
		scanf_s("%d", &num3);
		result1 += num3;
	}

	printf("입력된 정수의 총합은 : %d \n", result1);
	
   int dan = 0, num4 = 10;
    printf("\n몇 단?: ");
	scanf_s("%d", &dan);
	
	while (--num4)
	printf(" %d*%d=%d \n", dan, num4, dan * num4);

	int num5, num6;
	int num7 = 0;
	int result2 = 0, result3 = 0;
	printf("\n몇 개의 정수를 입력하십니까? : ");
	scanf_s("%d", &num5);

	while (num7++ < num5)
	{
		scanf_s("%d", &num6);
		result2 += num6;
	}
	result3 = result2 / num5;
	printf("평균값은?: %f", (double)result3);
	return 0;

}
