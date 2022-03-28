#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};  //struct 만 사용한 구조체 선언
typedef struct {
char lastName;
int studentId;
char grade;
} student2; //typedef를 사용한 구조체 선언
int main() {
printf("[----- [Your Name] [Student ID] -----]\n");
printf("\t신승용    2019038073\n");
struct student1 st1 = {'A', 100, 'A'};  //구조체 student1에 st1의 이름으로 lastname 에A, studentId에 100, grade에 A를 입력한다.
printf("st1.lastName = %c\n", st1.lastName);    //입력한 st1.lastName을 출력(A)
printf("st1.studentId = %d\n", st1.studentId);  //입력한 st1.studentId출력 (100)
printf("st1.grade = %c\n", st1.grade);  //입력한 st1.grade출력 (A)
student2 st2 = {'B', 200, 'B'}; //구조체 student2에 st2의 이름으로 B, 200, B 입력
printf("\nst2.lastName = %c\n", st2.lastName);  //입력한 st2.lastName 출력(B)
printf("st2.studentId = %d\n", st2.studentId);  //입력한 st2.studentId 출력(200)
printf("st2.grade = %c\n", st2.grade);  //입력한 st2.grade 출력(B)
student2 st3;   //student2의 형식을 가진 구조체st3 생성
st3 = st2;  //st3를 st2로 구조치환
printf("\nst3.lastName = %c\n", st3.lastName);  //st3는 st2로 치환됐기 때문에 st2와 똑같은 값인 B출력
printf("st3.studentId = %d\n", st3.studentId);  //st2와 같은 200 출력
printf("st3.grade = %c\n", st3.grade);  //st2와 같은 B출력
/* equality test */
/*if(st3 == st2) /* not working */  //논리연산자로 구조의 동등성을 검사 할 수 없음
/*printf("equal\n");    //오류로 실행불가
else
printf("not equal\n");*/
return 0;
}