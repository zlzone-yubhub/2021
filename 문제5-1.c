/*
제목: 문제 5-1
기능: 문제 5-1 풀이
파일 이름: 문제5-1.c
수정날짜: 20210107
작성자:zlzoneyub
*/
#include <stdio.h>  //헤더파일 선언

int main(void)  //main 함수 시작
{
	int area;
	int x1, x2, y1, y2;

	printf("두 점이 이루는 직사각형의 넓이를 계산하여 출력합니다.\n");
	printf("좌 상단과 우 하단의 좌표값을 순서대로 입력하세요.\n");
	printf("단, 좌 상단의 좌표 값이 우 하단의 좌표 값보다 작아야 합니다.\n\n");
	printf("두 개의 좌표 값을 입력하세요 : \n");
	scanf_s("%d" "%d" "%d" "%d", &x1, &y1, &x2, &y2);
	area = (x2 - x1) * (y2 - y1);

    printf("직사각형의 넓이 값은 : %d\n\n", area);

	double num1, num2;

	printf("두 개의 실수의 사칙연산 결과를 계산하여 출력합니다. \n");
	printf("두 개의 실수를 입력하세요 : \n\n");
	scanf_s("%lf %lf", &num1, &num2);

	printf("두 실수의 사칙연산 결과는 x+y=%f nx-y=%f x*y=%f x/y=%f\n\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	printf("아스키 코드로 변환하고 싶은 정수를 입력하시오 : ");
	int num3;
	scanf_s("%d", &num3);
	printf("아스키 코드 값은 : %c\n\n", num3);
	
    char ch;
	printf("정수로 변환하고 싶은 아스키 코드를 입력하시오 : \n");
	scanf_s(" %c", &ch, 1); // scanf 함수 연속으로 사용할경우 문자열 입력이 그냥 넘어가는 오류가 생김. %c 앞에 공백을 넣으면 해결 가능. 
	printf("정수 값은 : %d \n\n", ch);
	
	return 0;
}
