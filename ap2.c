#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�    2019038073\n");
int list[5];    //������ �迭 5ĭ ����
int *plist[5];  //������ �迭 5ĭ ����
list[0] = 10;   //������ �迭 list ù��° ���� 10
list[1] = 11;   //������ �迭 list �ι�° ���� 11
plist[0] = (int*)malloc(sizeof(int));   //������ �迭 plist �����Ҵ�
printf("list[0] \t= %d\n", list[0]);    //�迭 list�� ù��° ���� ���
printf("address of list \t= %p\n", list);   //�迭 list�� �ּ� ���
printf("address of list[0] \t= %p\n", &list[0]);    //list[0]�� �ּ� ���(�迭�� �ּ�)
printf("address of list + 0 \t= %p\n", list+0);     //list+0�� �ּ����(�迭�� �ּ�)
printf("address of list + 1 \t= %p\n", list+1);     //list+1�� �ּ����(�迭�� �ι�° ������ �ּ�)
printf("address of list + 2 \t= %p\n", list+2);     //list+2�� �ּ����(�迭�� ����° ������ �ּ�)
printf("address of list + 3 \t= %p\n", list+3);     //list+3�� �ּ����(�迭�� �׹�° ������ �ּ�)
printf("address of list + 4 \t= %p\n", list+4);     //list+4�� �ּ����(�迭�� �ټ� ��° ������ �ּ�)
printf("address of list[4] \t= %p\n", &list[4]);   //list[4]�� �ּ����(�迭�� �ټ���° ������ �ּ�)
free(plist[0]); //�����Ҵ� ����
}