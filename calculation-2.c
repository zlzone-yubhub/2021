/*
제목: 예제 3-1 
기능: 예제 3-1 풀이
파일 이름: 문제3-1.c
수정날짜: 20210105
작성자:zlzoneyub
*/
#include <stdio.h>  //헤더파일 선언

int main(void)  //main 함수 시작
{
    /*
    이 함수는 사용자로부터 두 개의 정수를 입력 받고 연산결과를 출력합니다.
    연산결과는 모니터에 출력됩니다.
    */

    int result1;
    int num1, num2; // 변수 선언

    printf("x - y식에 두 개의 정수를 입력하세요.\n");
    printf("두 개의 정수 입력: ");
    scanf_s("%d %d", &num1, &num2); //키보드로 입력된 정수를 변수에 저장한다.
   
    result1 = num1 - num2;
    printf("%d - %d = %d \n", num1, num2, result1);

     /*
    이 함수는 사용자로부터 세 개의 정수를 입력 받고 연산결과를 출력합니다.
    연산결과는 모니터에 출력됩니다.
    */

    int result2;
    int num4, num5, num6; // 변수 선언

    printf("x * y + z식에 세 개의 정수를 입력하세요.\n");
    printf("세 개의 정수 입력: ");
    scanf_s("%d %d %d", &num4, &num5, &num6); //키보드로 입력된 정수를 변수에 저장한다.

    result2 = num4 * num5 + num6;
    printf("%d * %d + %d = %d \n", num4, num5, num6, result2);

    /*
    이 함수는 사용자로부터 한 개의 정수를 입력 받고 연산결과를 출력합니다.
    연산결과는 모니터에 출력됩니다.
    */

    int result3;
    int num7; // 변수 선언

    printf("x * x식에 한 개의 정수를 입력하세요.\n");
    printf("한 개의 정수 입력: ");
    scanf_s("%d", &num7); //키보드로 입력된 정수를 변수에 저장한다.

    result3 = num7 * num7;
    printf("%d의 제곱 = %d \n", num7, result3);

    /*
    이 함수는 사용자로부터 두 개의 정수를 입력 받고 연산결과를 출력합니다.
    연산결과는 모니터에 출력됩니다.
    */

    int result4, result5;
    int num8, num9; // 변수 선언

    printf("x / y식에 두 개의 정수를 입력하세요.\n");
    printf("두 개의 정수 입력: ");
    scanf_s("%d %d", &num8, &num9); //키보드로 입력된 정수를 변수에 저장한다.

    result4 = num8 / num9;
    result5 = num8 % num9;
    printf("%d / %d = 몫 %d와 나머지 %d \n", num8, num9, result4, result5);

    /*
    이 함수는 사용자로부터 세 개의 정수를 입력 받고 연산결과를 출력합니다.
    연산결과는 모니터에 출력됩니다.
    */

    int result6;
    int num10, num11, num12; // 변수 선언

    printf("(x - y) * (y + z) * (z / x)식에 세 개의 정수를 입력하세요.\n");
    printf("세 개의 정수 입력: ");
    scanf_s("%d %d %d", &num10, &num11, &num12); //키보드로 입력된 정수를 변수에 저장한다.

    result6 = (num10 - num11) * (num11 + num12) * (num12 / num10);
    printf("(%d - %d) * (%d + %d) * (%d / %d) = %d \n", num10, num11, num11, num12, num12, num10, result6);
   
    return 0;  //0의 반환
} //main함수의 끝

