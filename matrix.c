#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Method Declaration */
int** create_matrix(int row, int col);
void print_matrix(int** matrix, int row, int col);
int free_matrix(int** matrix, int row, int col);
int fill_data(int** matrix, int row, int col);
int addition_matrix(int** matrix_a, int** matrix_b, int row, int col);
int subtraction_matrix(int** matrix_a, int** matrix_b, int row, int col);
int transpose_matrix(int** matrix, int** matrix_t, int row, int col);
int multiply_matrix(int** matrix_a, int** matrix_t, int row, int col);

int main()
{

	char command;
	printf("[----- [Your Name]  [Student ID] -----]\n");
	printf("\t  �Ž¿�     2019038073\n");
	int row, col;
	srand((unsigned)time(NULL));

	printf("Input row and col : ");
	scanf("%d %d", &row, &col);
	int** matrix_a = create_matrix(row, col);
	int** matrix_b = create_matrix(row, col);
	int** matrix_a_t = create_matrix(col, row);

	printf("Matrix Created.\n");

	if (matrix_a == NULL || matrix_b == NULL) { return -1; }

	do {
		printf("----------------------------------------------------------------\n");
		printf("                     Matrix Manipulation                        \n");
		printf("----------------------------------------------------------------\n");
		printf(" Initialize Matrix   = z           Print Matrix        = p \n");
		printf(" Add Matrix          = a           Subtract Matrix     = s \n");
		printf(" Transpose matrix_a  = t           Multiply Matrix     = m \n");
		printf(" Quit                = q \n");
		printf("----------------------------------------------------------------\n");

		printf("Command = ");
		scanf(" %c", &command);

		switch (command) {
		case 'z': case 'Z':
			printf("Matrix Initialized\n");
			fill_data(matrix_a, row, col);
			fill_data(matrix_b, row, col);
			break;
		case 'p': case 'P':
			printf("Print matrix\n");
			printf("matrix_a\n");
			print_matrix(matrix_a, row, col);
			printf("matrix_b\n");
			print_matrix(matrix_b, row, col);
			break;
		case 'a': case 'A':
			printf("Add two matrices\n");
			addition_matrix(matrix_a, matrix_b, row, col);
			break;
		case 's': case 'S':
			printf("Subtract two matrices \n");
			subtraction_matrix(matrix_a, matrix_b, row, col);
			break;
		case 't': case 'T':
			printf("Transpose matrix_a \n");
			printf("matrix_a\n");
			transpose_matrix(matrix_a, matrix_a_t, col, row);
			print_matrix(matrix_a_t, col, row);
			break;
		case 'm': case 'M':
			printf("Multiply matrix_a with transposed matrix_a \n");
			transpose_matrix(matrix_a, matrix_a_t, col, row);
			multiply_matrix(matrix_a, matrix_a_t, row, col);
			break;
		case 'q': case 'Q':
			printf("Free all matrices..\n");
			free_matrix(matrix_a_t, col, row);
			free_matrix(matrix_a, row, col);
			free_matrix(matrix_b, row, col);
			break;
		default:
			printf("\n       >>>>>   Concentration!!   <<<<<     \n");
			break;
		}

	} while (command != 'q' && command != 'Q');

	return 1;
}

/* create a 2d array whose size is row x col using malloc() */
int** create_matrix(int row, int col)
{	
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	int **arr;
	arr = (int**)malloc(sizeof(int*)*row);	//2�������� �迭 �����Ҵ�
	for (int i = 0; i < row; i++) {
		arr[i] = (int*)malloc(sizeof(int)*col);	//�����Ҵ��� 2�������� �迭�� �����͹迭�� �����Ҵ�
	}
	return arr;
	if (arr == NULL) {	//������ ��ó��
		printf("Memory Allocation Failed.\n");
		return NULL;
	}
	return 1;
}

/* print matrix whose size is row x col */
void print_matrix(int** matrix, int row, int col)
{
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {	//���� ����ŭ �ݺ�
		for (int j = 0; j < col; j++) {	//���� ����ŭ �ݺ�
			printf("%d\t", matrix[i][j]);	//�迭�� ���� ���
		}
		printf("\n");
	}
	if (matrix == NULL) {	//������ ��ó��
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		return;
	}
	
}


/* free memory allocated by create_matrix() */
int free_matrix(int** matrix, int row, int col)
{
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {	//���������� �迭 �ȿ� �����͹迭�� �Ҵ� �Ǿ������Ƿ� �����͹迭 �����Ҵ� ����
		free(matrix[i]);
	}
	free(matrix);//���� ������ �迭�� �ߴ� �����Ҵ� ����

	return 1;
}


/* assign random values to the given matrix */
int fill_data(int** matrix, int row, int col)
{
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {	//���� ����ŭ �ݺ�
		for (int j = 0; j < col; j++) {	//���� ����ŭ �ݺ�
			matrix[i][j] = rand() % 20;	//0~19���� ���������� ���п� ���� �ο�
		}
	}
	if (matrix == NULL) {	//������ ��ó��
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		return -1;
	}
	return 1;
}

/* matrix_sum = matrix_a + matrix_b */
int addition_matrix(int** matrix_a, int** matrix_b, int row, int col)
{
	int** matrix_sum = create_matrix(row, col);	//�迭�� ���� ������ 2���� �迭 �����Ҵ����� ����
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix_sum[i][j] = matrix_a[i][j] + matrix_b[i][j];	//matrix_sum�迭 i��j�� ���п� matrix_a �迭 i��j�� ���а� matrix_b �迭 i��j�� ������ ���� ����
		}
		printf("\n");
	}
	if (matrix_a == NULL || matrix_b == NULL) {	//������ ��ó��
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		return -1;
	}
	print_matrix(matrix_sum, row, col);	//matirx_a�� matrix_b�� ���� ������ �迭�� matrix_sum�� print_matrix �Լ��� �̿��Ͽ� ���
	free_matrix(matrix_sum, row, col);	//������� �迭 matrix_sum�� �����Ҵ� ����
	return 1;
}

/* matrix_sub = matrix_a - matrix_b */
int subtraction_matrix(int** matrix_a, int** matrix_b, int row, int col)
{
	int** matrix_sub = create_matrix(row, col);	//�迭�� ���� ������ 2���� �迭 �����Ҵ����� ����
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix_sub[i][j]= matrix_a[i][j] - matrix_b[i][j]; //matrix_sub�迭 i��j�� ���п� matrix_a �迭 i��j�� ���а� matrix_b �迭 i��j�� ������ ���� ����
		}
		printf("\n");
	}
	if (matrix_a == NULL || matrix_b == NULL) {	//������ ��ó��
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		return -1;
	}
	print_matrix(matrix_sub, row, col);	//matirx_a�� matrix_b�� ���� ������ �迭�� matrix_sub�� print_matrix �Լ��� �̿��Ͽ� ���
	free_matrix(matrix_sub, row, col);	//������� �迭 matrix_sub�� �����Ҵ� ����
	return 1;
}

/* transpose the matrix to matrix_t */
int transpose_matrix(int** matrix, int** matrix_t, int row, int col)
{
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	for (int i = 0; i < row; i ++ ) {
		for (int j = 0; j < col; j++) {
			matrix_t[i][j] = matrix[j][i];	//��ġ����� ���� �밢������ �������� �ݴ��� ����̹Ƿ� ��� matrix i��j�������� ��,���� �ݴ�� �����ϸ� ��ġ����� ��
		}
	}
	if (matrix == NULL || matrix_t == NULL) {	//������ ��ó��
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		return -1;
	}
	return 1;
}

/* matrix_axt - matrix_a x matrix_t */
int multiply_matrix(int** matrix_a, int** matrix_t, int row, int col)
{
	int** matrix_axt = create_matrix(row, row);
	
	if (row <= 0 || col <= 0) {	//������ ��ó��
		printf("��� ���� �ùٸ��� �ʽ��ϴ�.\n");
		return -1;
	}
	for (int matrix_a_row = 0; matrix_a_row < row; matrix_a_row++) {
		for (int matrix_t_row = 0; matrix_t_row < row; matrix_t_row++) {	//����� �� AXB�� ��� A�� ���� ��� B�� ���� ���� ���ƾ� �ϴµ� ���� ���а����� ���Ǽ��̰� ���� ���а����� ���� ���̹Ƿ� ���� ������ŭ �ݺ��Ѵ�.
			int temp = 0;
			for (int matrix_col = 0; matrix_col < col; matrix_col++)	//����� �� AXB�� ��� A�� ���� ��� B�� ���� ���� ���ƾ� �ϴµ� ���� ���а����� ���Ǽ��̰� ���� ���а����� ���� ���̹Ƿ� ���� ������ŭ �ݺ��Ѵ�.
				temp += matrix_a[matrix_a_row][matrix_col] * matrix_t[matrix_col][matrix_t_row];	//����� �� AXB�� ��� A�� ��� ��� B�� ���� ���Ͽ� ���� ���̹Ƿ� �� ������ ���� ���� temp�� �ջ��Ѵ�.
			matrix_axt[matrix_a_row][matrix_t_row] = temp; //��� �ջ��� ���� ����� ���� �����ϴ� ������ �迭 matrix_axt�� �����Ѵ�.
		}
	}
	
	if (matrix_t == NULL || matrix_axt == NULL) {	//������ ��ó��
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		return -1;
	}
	print_matrix(matrix_axt, row, row);	//matirx_a�� matrix_t�� ���� ������ �迭�� matrix_axt�� print_matrix �Լ��� �̿��Ͽ� ���
	free_matrix(matrix_axt, row, col);	//������� �迭 matrix_axt�� �����Ҵ� ����
	return 1;
}

