#include <stdio.h>
struct student {    //구조체 student 선언
char lastName[13]; /* 13 bytes */   //char형 문자열 13칸 생성
int studentId; /* 4 bytes */    //정수형 변수 선언
short grade; /* 2 bytes */  //short형 변수 선언
};
int main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용    2019038073\n");
struct student pst; //구조체 student를 pst이름으로 생성
printf("size of student = %ld\n", sizeof(struct student));  //구조체의 메모리 크기를 출력(패딩처리를 하기 때문에 19바이트가 아닌 24바이트 출력)
printf("size of int = %ld\n", sizeof(int)); //정수형 변수의 메모리 크기 출력
printf("size of short = %ld\n", sizeof(short)); //short형 변수의 메모리 크기 출력
return 0;
}