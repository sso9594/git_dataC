#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�    2019038073\n");
for(i=0; i < MAX_SIZE; i++) //�迭�� ũ�⸸ŭ �ݺ�
input[i] = i;   //�迭�� ���� �Է�(0~99)
/* for checking call by reference */
printf("address of input = %p\n", input); //�迭�� �̸��� �迭�� �ּ��̹Ƿ� �迭�� �ּ� ���
answer = sum(input, MAX_SIZE);  //�迭�� �ּҿ� �迭�� ũ�⸦ �Լ� answer�� ����
printf("The sum is: %f\n", answer); //�迭�� �� ���
}
float sum(float list[], int n)  //�ּҸ� ���޹޾� �迭�� ���(�ּҿ� ���� ȣ��), �迭�� ũ��n
{
printf("value of list = %p\n", list);   //�迭�� �̸��� �迭�� �ּ��̹Ƿ� ���޹��� �迭 input�� �ּ� ���(�ּҿ� ���� ȣ��)
printf("address of list = %p\n\n", &list);  //���ڷ� ���� ���� �迭�� �ּ� ���(�ּҿ� ���� ȣ��)
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += list[i]; //��� �迭�� ���Ҹ� ���Ѵ�
return tempsum; //����� ����
}