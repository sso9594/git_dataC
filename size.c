#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용    2019038073\n");
printf("sizeof(x) = %lu\n", sizeof(x)); //x의 메모리 크기를 출력(주소값을 저장중)
printf("sizeof(*x) = %lu\n", sizeof(*x));//*x의 메모리 크기를 출력(주소값을 저장중)
printf("sizeof(**x) = %lu\n", sizeof(**x));//**x의 메모리 크기를 출력(정수형 변수 크기 할당중)
}