#include <stdio.h>
struct student {    //����ü student ����
char lastName[13]; /* 13 bytes */   //char�� ���ڿ� 13ĭ ����
int studentId; /* 4 bytes */    //������ ���� ����
short grade; /* 2 bytes */  //short�� ���� ����
};
int main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�    2019038073\n");
struct student pst; //����ü student�� pst�̸����� ����
printf("size of student = %ld\n", sizeof(struct student));  //����ü�� �޸� ũ�⸦ ���(�е�ó���� �ϱ� ������ 19����Ʈ�� �ƴ� 24����Ʈ ���)
printf("size of int = %ld\n", sizeof(int)); //������ ������ �޸� ũ�� ���
printf("size of short = %ld\n", sizeof(short)); //short�� ������ �޸� ũ�� ���
return 0;
}