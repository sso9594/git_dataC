#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�   2019038073\n");
int list[5];    //5ĭ �迭 ����
int *plist[5] = {NULL,};    //5ĭ ����Ʈ �迭 ����
plist[0] = (int *)malloc(sizeof(int));  //���� �޸� �Ҵ�
list[0] = 1;    //�迭 ù��° ���� 1
list[1] = 100;  //�迭 �ι�° ���� 100
*plist[0] = 200; //plist�� ù��° ���Ұ� �������ִ� �ּ� ������ ���� 200
printf("value of list[0] = %d\n", list[0]); //�迭 list�� ù��° ���� ���
printf("address of list[0] = %p\n", &list[0]); //�迭 list�� �ּ� ���
printf("value of list = %p\n", list); //�迭 list�� �ּ� ���
printf("address of list (&list) = %p\n", &list); //�迭 list�� �ּ� ���
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]); //�迭 list�� �ι�° ���� ���
printf("address of list[1] = %p\n", &list[1]); //�迭 list�� �ι�° ���� �ּ� ���
printf("value of *(list+1) = %d\n", *(list + 1)); //�迭 list�� �ι�° ������ �ּҸ� ������
printf("address of list+1 = %p\n", list+1); //�迭 list�� �ι�° ������ �ּ� ���
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]); //�迭 plist�� ù��° ���Ұ� ������ �ִ� �ּ� ������ �� �� ��� 
printf("&plist[0] = %p\n", &plist[0]); //�����Ҵ� ���� �迭 plist�� �ּҰ� ���
printf("&plist = %p\n", &plist); //�迭 plist�� �ּҰ� ���
printf("plist = %p\n", plist); //�迭 plist�� �ּҰ� ���
printf("plist[0] = %p\n", plist[0]); //�迭 plist�� ù��° ���� ���(���� �Ҵ� ���� �޸��� �ּҰ�)
printf("plist[1] = %p\n", plist[1]); //���� �Ҵ��� �޾����Ƿ� ���� �Է� �Ǿ����� �ʾ� �ּҰ��� ����
printf("plist[2] = %p\n", plist[2]); //���� �Ҵ��� �޾����Ƿ� ���� �Է� �Ǿ����� �ʾ� �ּҰ��� ����
printf("plist[3] = %p\n", plist[3]); //���� �Ҵ��� �޾����Ƿ� ���� �Է� �Ǿ����� �ʾ� �ּҰ��� ����
printf("plist[4] = %p\n", plist[4]); //���� �Ҵ��� �޾����Ƿ� ���� �Է� �Ǿ����� �ʾ� �ּҰ��� ����
free(plist[0]); //���� �Ҵ� ����
}