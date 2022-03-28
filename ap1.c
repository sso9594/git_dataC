#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용   2019038073\n");
int list[5];    //5칸 배열 생성
int *plist[5] = {NULL,};    //5칸 포인트 배열 생성
plist[0] = (int *)malloc(sizeof(int));  //동적 메모리 할당
list[0] = 1;    //배열 첫번째 원소 1
list[1] = 100;  //배열 두번째 원소 100
*plist[0] = 200; //plist의 첫번째 원소가 가지고있는 주소 역참조 값이 200
printf("value of list[0] = %d\n", list[0]); //배열 list의 첫번째 원소 출력
printf("address of list[0] = %p\n", &list[0]); //배열 list의 주소 출력
printf("value of list = %p\n", list); //배열 list의 주소 출력
printf("address of list (&list) = %p\n", &list); //배열 list의 주소 출력
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]); //배열 list의 두번째 원소 출력
printf("address of list[1] = %p\n", &list[1]); //배열 list의 두번째 원소 주소 출력
printf("value of *(list+1) = %d\n", *(list + 1)); //배열 list의 두번째 원소의 주소를 역참조
printf("address of list+1 = %p\n", list+1); //배열 list의 두번째 원소의 주소 출력
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]); //배열 plist의 첫번째 원소가 가지고 있는 주소 역참조 한 값 출력 
printf("&plist[0] = %p\n", &plist[0]); //동적할당 받은 배열 plist의 주소값 출력
printf("&plist = %p\n", &plist); //배열 plist의 주소값 출력
printf("plist = %p\n", plist); //배열 plist의 주소값 출력
printf("plist[0] = %p\n", plist[0]); //배열 plist의 첫번째 원소 출력(동적 할당 받은 메모리의 주소값)
printf("plist[1] = %p\n", plist[1]); //동적 할당을 받았으므로 값이 입력 되어있지 않아 주소값이 없음
printf("plist[2] = %p\n", plist[2]); //동적 할당을 받았으므로 값이 입력 되어있지 않아 주소값이 없음
printf("plist[3] = %p\n", plist[3]); //동적 할당을 받았으므로 값이 입력 되어있지 않아 주소값이 없음
printf("plist[4] = %p\n", plist[4]); //동적 할당을 받았으므로 값이 입력 되어있지 않아 주소값이 없음
free(plist[0]); //동적 할당 해제
}