#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�    2019038073\n");
printf("sizeof(x) = %lu\n", sizeof(x)); //x�� �޸� ũ�⸦ ���(�ּҰ��� ������)
printf("sizeof(*x) = %lu\n", sizeof(*x));//*x�� �޸� ũ�⸦ ���(�ּҰ��� ������)
printf("sizeof(**x) = %lu\n", sizeof(**x));//**x�� �޸� ũ�⸦ ���(������ ���� ũ�� �Ҵ���)
}