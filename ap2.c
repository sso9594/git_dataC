#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용    2019038073\n");
int list[5];    //정수형 배열 5칸 생성
int *plist[5];  //포인터 배열 5칸 생성
list[0] = 10;   //정수형 배열 list 첫번째 원소 10
list[1] = 11;   //정수형 배열 list 두번째 원소 11
plist[0] = (int*)malloc(sizeof(int));   //포인터 배열 plist 동적할당
printf("list[0] \t= %d\n", list[0]);    //배열 list의 첫번째 원소 출력
printf("address of list \t= %p\n", list);   //배열 list의 주소 출력
printf("address of list[0] \t= %p\n", &list[0]);    //list[0]의 주소 출력(배열의 주소)
printf("address of list + 0 \t= %p\n", list+0);     //list+0의 주소출력(배열의 주소)
printf("address of list + 1 \t= %p\n", list+1);     //list+1의 주소출력(배열의 두번째 원소의 주소)
printf("address of list + 2 \t= %p\n", list+2);     //list+2의 주소출력(배열의 세번째 원소의 주소)
printf("address of list + 3 \t= %p\n", list+3);     //list+3의 주소출력(배열의 네번째 원소의 주소)
printf("address of list + 4 \t= %p\n", list+4);     //list+4의 주소출력(배열의 다섯 번째 원소의 주소)
printf("address of list[4] \t= %p\n", &list[4]);   //list[4]의 주소출력(배열의 다섯번째 원소의 주소)
free(plist[0]); //동적할당 해제
}