#include <stdio.h>
int main()
{
char charType;	//charType�̶�� �������� ���� char�� ���� ����
int integerType;	//integerType�̶�� �������� ���� int�� ���� ����
float floatType;	//floatType�̶�� �������� ���� float�� ���� ����
double doubleType;	//doubleType�̶�� �������� ���� double�� ���� ����
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�      2019038073\n");
printf("Size of char: %ld byte\n", sizeof(charType));//sizeof�Լ��� ���� charType ������ �ڷ����� ��						�� �޸� ũ�⸦ ���
printf("Size of int: %ld bytes\n", sizeof(integerType));//sizeof�Լ��� ���� integerType ������ �ڷ���						  �� ���� �޸� ũ�⸦ ���
printf("Size of float: %ld bytes\n", sizeof(floatType));//sizeof�Լ��� ���� floatType ������ �ڷ����� 						  ���� �޸� ũ�⸦ ���
printf("Size of double: %ld bytes\n", sizeof(doubleType));//sizeof�Լ��� ���� doubleType ������ �ڷ�						     ���� ���� �޸� ũ�⸦ ���
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n", sizeof(char));//sizeof�Լ��� ���� char�� �ڷ����� ���� �޸� ũ�� 					    ���
printf("Size of int: %ld bytes\n", sizeof(int));//sizeof�Լ��� ���� int�� �ڷ����� ���� �޸� ũ�� ���
printf("Size of float: %ld bytes\n", sizeof(float));//sizeof�Լ��� ���� float�� �ڷ����� ���� �޸� ũ�� 					     ���
printf("Size of double: %ld bytes\n", sizeof(double));//sizeof�Լ��� ���� double�� �ڷ����� ���� �޸�						�� ũ�� ���
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n", sizeof(char*));//sizeof�Լ��� ���� char�� �����Ͱ� ���� �޸� ũ					      �� ���
printf("Size of int*: %ld bytes\n", sizeof(int*));//sizeof�Լ��� ���� int�� �����Ͱ� ���� �޸� ũ�� ��					    ��
printf("Size of float*: %ld bytes\n", sizeof(float*));//sizeof�Լ��� ���� float�� �����Ͱ� ���� �޸� ũ					       �� ���
printf("Size of double*: %ld bytes\n", sizeof(double*));//sizeof�Լ��� ���� double�� �����Ͱ� ���� ��						   �� ũ�� ���
return 0;
}
