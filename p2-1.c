#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용    2019038073\n");
for(i=0; i < MAX_SIZE; i++) //배열의 크기만큼 반복
input[i] = i;   //배열의 원소 입력(0~99)
/* for checking call by reference */
printf("address of input = %p\n", input); //배열의 이름은 배열의 주소이므로 배열의 주소 출력
answer = sum(input, MAX_SIZE);  //배열의 주소와 배열의 크기를 함수 answer에 전달
printf("The sum is: %f\n", answer); //배열의 합 출력
}
float sum(float list[], int n)  //주소를 전달받아 배열로 사용(주소에 의한 호출), 배열의 크기n
{
printf("value of list = %p\n", list);   //배열의 이름은 배열의 주소이므로 전달받은 배열 input의 주소 출력(주소에 의한 호출)
printf("address of list = %p\n\n", &list);  //인자로 전달 받은 배열의 주소 출력(주소에 의한 호출)
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += list[i]; //모든 배열의 원소를 합한다
return tempsum; //결과값 리턴
}