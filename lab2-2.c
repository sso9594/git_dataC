#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용     2019038073\n");

printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);    //변수 i에 1234를 저장하였으므로 1234 출력
printf("address of i == %p\n", &i); //변수 i의 메모리 주소를 출력
printf("value of ptr == %p\n", ptr);    //포인터변수 ptr의 저장된 값을 출력
printf("address of ptr == %p\n", &ptr); //포인터변수 ptr의 메모리 주소를 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);    //변수 i의 값이 바뀌진 않았기 때문에 1234 출력
printf("address of i == %p\n", &i); //변수 i의 주소가 달라지진 않았기 때문에 주소 그대로 출력
printf("value of ptr == %p\n", ptr);    //포인터 변수ptr이 변수i의 메모리 주소를 가리키고 있으므로 변수 i의 주소를 출력
printf("address of ptr == %p\n", &ptr); //포인터 변수ptr의 주소는 그대로 이므로 포인터 변수ptr의 주소출력
printf("value of *ptr == %d\n", *ptr);  //포인터 변수ptr이 가리키는 메모리 공간에 있는 값 출력 (변수i의 값)
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);    //변수 i의 값이 달라지진 않았기 때문에 1234 출력
printf("address of i == %p\n", &i); //변수 i의 주소가 달라지진 않았기 때문에 변수i의 주소출력
printf("value of ptr == %p\n", ptr);    //이중포인터 변수dptr이 참조한것이므로 ptr의 값은 바뀌지 않았 기 때문에 전과 동일하게 변수 i의 주소 출력
printf("address of ptr == %p\n", &ptr); //포인터 변수ptr의 메모리 주소값 출력
printf("value of *ptr == %d\n", *ptr);  //포인터 변수 ptr이 가리키는 공간이 달라지지 않았으므로 변수i의 값인 1234 출력
printf("value of dptr == %p\n", dptr);  //이중포인터 변수 dptr이 포인터변수 ptr의 메모리공간을 가리키고 있으므로 포인터변수ptr의 메모리 주소값 출력
printf("address of dptr == %p\n", &dptr);    //이중포인터 변수dptr의 메모리 주소값 출력
printf("value of *dptr == %p\n", *dptr);    //이중포인터 변수dptr이 역참조하고 있는 포인터 변수 ptr의 값 출력
printf("value of **dptr == %d\n", **dptr);  //이중포인터 변수dptr이 역참조하고있는 포인터변수 ptr이 역참조하는 값 출력
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); //포인터 변수 ptr의 역참조 값이 7777로 바뀜

printf("value of i == %d\n", i);    //포인터 변수 ptr이 가리키는 공간의 값이 7777로 바뀌었으므로 7777출력
printf("value of *ptr == %d\n", *ptr);  //포인터 변수ptr의 역참조 값이 7777로 바뀌었으므로 7777출력
printf("value of **dptr == %d\n", **dptr);  //이중포인터dptr이 가리키는 변수인 포인터변수ptr이 가리키는 공간의 값인 7777출력
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");//이중포인터 변수dptr의 역참조인 포인터변수ptr의 역참조 값이8888로 바뀜
printf("value of i == %d\n", i);//변수 i는 이중포인터 변수dptr의 역참조의역참조 이므로 값이 8888로 바뀌었으므로 8888출력
printf("value of *ptr == %d\n", *ptr);//포인터 변수ptr은 이중포인터 변수dptr의 역참조이므로 8888출력
printf("value of **dptr == %d\n", **dptr);//이중포인터 변수dptr의 역참조인 포인터변수ptr의 역참조 값인 8888출력
return 0;
}
