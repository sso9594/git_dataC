#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�    2019038073\n");
int one[] = {0, 1, 2, 3, 4};    //������ �迭 one �� ���� 0,1,2,3,4 �Է�
printf("one = %p\n", one);  //�迭�� �̸��� �迭�� �ּ� �̹Ƿ� �迭 one�� �ּ� ���
printf("&one = %p\n", &one);  //�迭 one�� �ּҸ� ���
printf("&one[0] = %p\n", &one[0]);  //�迭�� ù��° ������ �ּҴ� �迭�� �ּ��̹Ƿ� �迭 one�� �ּ� ���
printf("\n");
print1(&one[0], 5); //�Լ� print1�� �迭 one�� �ּҿ� �迭�� ũ�� ����
return 0;
}
void print1 (int *ptr, int rows)    //�迭�� �ּҸ� ������ ptr�� ����
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)  //�迭�� ũ�⸸ŭ �ݺ��� �ݺ�
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //�迭�� �� ������ �ּҿ� ������ ���� ���
printf("\n");
}