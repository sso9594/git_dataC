#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};  //struct �� ����� ����ü ����
typedef struct {
char lastName;
int studentId;
char grade;
} student2; //typedef�� ����� ����ü ����
int main() {
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t�Ž¿�    2019038073\n");
struct student1 st1 = {'A', 100, 'A'};  //����ü student1�� st1�� �̸����� lastname ��A, studentId�� 100, grade�� A�� �Է��Ѵ�.
printf("st1.lastName = %c\n", st1.lastName);    //�Է��� st1.lastName�� ���(A)
printf("st1.studentId = %d\n", st1.studentId);  //�Է��� st1.studentId��� (100)
printf("st1.grade = %c\n", st1.grade);  //�Է��� st1.grade��� (A)
student2 st2 = {'B', 200, 'B'}; //����ü student2�� st2�� �̸����� B, 200, B �Է�
printf("\nst2.lastName = %c\n", st2.lastName);  //�Է��� st2.lastName ���(B)
printf("st2.studentId = %d\n", st2.studentId);  //�Է��� st2.studentId ���(200)
printf("st2.grade = %c\n", st2.grade);  //�Է��� st2.grade ���(B)
student2 st3;   //student2�� ������ ���� ����üst3 ����
st3 = st2;  //st3�� st2�� ����ġȯ
printf("\nst3.lastName = %c\n", st3.lastName);  //st3�� st2�� ġȯ�Ʊ� ������ st2�� �Ȱ��� ���� B���
printf("st3.studentId = %d\n", st3.studentId);  //st2�� ���� 200 ���
printf("st3.grade = %c\n", st3.grade);  //st2�� ���� B���
/* equality test */
/*if(st3 == st2) /* not working */  //�������ڷ� ������ ����� �˻� �� �� ����
/*printf("equal\n");    //������ ����Ұ�
else
printf("not equal\n");*/
return 0;
}