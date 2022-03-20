#include <stdio.h>
int main()
{
char charType;	//charType이라는 변수명을 가진 char형 변수 생성
int integerType;	//integerType이라는 변수명을 가진 int형 변수 생성
float floatType;	//floatType이라는 변수명을 가진 float형 변수 생성
double doubleType;	//doubleType이라는 변수명을 가진 double형 변수 생성
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용      2019038073\n");
printf("Size of char: %ld byte\n", sizeof(charType));//sizeof함수를 통해 charType 변수의 자료형이 가진 메모리 크기를 출력
printf("Size of int: %ld bytes\n", sizeof(integerType));//sizeof함수를 통해 integerType 변수의 자료형이 가진 메모리 크기를 출력
printf("Size of float: %ld bytes\n", sizeof(floatType));//sizeof함수를 통해 floatType 변수의 자료형이 가진 메모리 크기를 출력
printf("Size of double: %ld bytes\n", sizeof(doubleType));//sizeof함수를 통해 doubleType 변수의 자료=형이 가진 메모리 크기를 출력
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n", sizeof(char));//sizeof함수를 통해 char형 자료형이 가진 메모리 크기 출력
printf("Size of int: %ld bytes\n", sizeof(int));//sizeof함수를 통해 int형 자료형이 가진 메모리 크기 출력
printf("Size of float: %ld bytes\n", sizeof(float));//sizeof함수를 통해 float형 자료형이 가진 메모리 크기 출력
printf("Size of double: %ld bytes\n", sizeof(double));//sizeof함수를 통해 double형 자료형이 가진 메모리 크기 출력
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n", sizeof(char*));//sizeof함수를 통해 char형 포인터가 가진 메모리 크기 출력
printf("Size of int*: %ld bytes\n", sizeof(int*));//sizeof함수를 통해 int형 포인터가 가진 메모리 크기 출력
printf("Size of float*: %ld bytes\n", sizeof(float*));//sizeof함수를 통해 float형 포인터가 가진 메모리 크기 출력
printf("Size of double*: %ld bytes\n", sizeof(double*));//sizeof함수를 통해 double형 포인터가 가진 메모리 크기 출력
return 0;
}
