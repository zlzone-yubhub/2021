/*
제목: 변수와 연산자
기능: 변수 선언과 연산결과 출력
파일 이름: calculation.c
수정날짜: 20210104
작성자:zlzoneyub
*/
#include <stdio.h>  //헤더파일 선언

int main(void)  //main 함수 시작
{
    /*
    이 함수는 변수 선언 후 연산결과를 출력한다.
    연산결과는 모니터로 출력된다.
    */
    int num1 = 348, num2 = 5;  // 변수선언 
    printf("%d+%d=%d \n", num1, num2, num1 + num2);    
    printf("%d-%d=%d \n", num1, num2, num1 - num2);    
    printf("%d*%d=%d \n", num1, num2, num1 * num2);   
    printf("%d/%d의 몫=%d \n", num1, num2, num1 / num2);
    printf("%d/%d의 나머지=%d \n", num1, num2, num1 % num2);  //다양한 연산자를 이용한 연산결과 출력
    return 0;  //0의 반환
} //main함수의 끝