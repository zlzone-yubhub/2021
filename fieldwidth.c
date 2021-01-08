/*
제목: fieldwidth
기능: 필드 폭을 지정하여 정돈 출력
파일 이름: fieldwidth.c
수정날짜: 20210109
작성자:zlzoneyub
*/
#include <stdio.h>  //헤더파일 선언

int main(void)  //main 함수 시작
{
	printf("%-8s %-14s %5s \n", "이름", "학번", "학년");
	printf("%-8s %-14s %5s \n", "zlzone", "202012345", "2"); // 왜 d가 아니라 s지?
	return 0;
}

