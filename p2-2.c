#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용    2019038073\n");
int one[] = {0, 1, 2, 3, 4};    //정수형 배열 one 에 원소 0,1,2,3,4 입력
printf("one = %p\n", one);  //배열의 이름은 배열의 주소 이므로 배열 one의 주소 출력
printf("&one = %p\n", &one);  //배열 one의 주소를 출력
printf("&one[0] = %p\n", &one[0]);  //배열의 첫번째 원소의 주소는 배열의 주소이므로 배열 one의 주소 출력
printf("\n");
print1(&one[0], 5); //함수 print1에 배열 one의 주소와 배열의 크기 전달
return 0;
}
void print1 (int *ptr, int rows)    //배열의 주소를 포인터 ptr로 받음
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)  //배열의 크기만큼 반복문 반복
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //배열의 각 원소의 주소와 원소의 값을 출력
printf("\n");
}