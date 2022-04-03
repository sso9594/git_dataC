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
	printf("\t  신승용     2019038073\n");
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
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	int **arr;
	arr = (int**)malloc(sizeof(int*)*row);	//2중포인터 배열 동적할당
	for (int i = 0; i < row; i++) {
		arr[i] = (int*)malloc(sizeof(int)*col);	//동적할당한 2중포인터 배열에 포인터배열을 동적할당
	}
	return arr;
	if (arr == NULL) {	//데이터 후처리
		printf("Memory Allocation Failed.\n");
		return NULL;
	}
	return 1;
}

/* print matrix whose size is row x col */
void print_matrix(int** matrix, int row, int col)
{
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {	//행의 수만큼 반복
		for (int j = 0; j < col; j++) {	//열의 수만큼 반복
			printf("%d\t", matrix[i][j]);	//배열의 성분 출력
		}
		printf("\n");
	}
	if (matrix == NULL) {	//데이터 후처리
		printf("메모리 할당에 실패하였습니다.\n");
		return;
	}
	
}


/* free memory allocated by create_matrix() */
int free_matrix(int** matrix, int row, int col)
{
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {	//이중포인터 배열 안에 포인터배열이 할당 되어있으므로 포인터배열 동적할당 해제
		free(matrix[i]);
	}
	free(matrix);//이중 포인터 배열에 했던 동적할당 해제

	return 1;
}


/* assign random values to the given matrix */
int fill_data(int** matrix, int row, int col)
{
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {	//행의 수만큼 반복
		for (int j = 0; j < col; j++) {	//열의 수만큼 반복
			matrix[i][j] = rand() % 20;	//0~19까지 랜덤값으로 성분에 값을 부여
		}
	}
	if (matrix == NULL) {	//데이터 후처리
		printf("메모리 할당에 실패하였습니다.\n");
		return -1;
	}
	return 1;
}

/* matrix_sum = matrix_a + matrix_b */
int addition_matrix(int** matrix_a, int** matrix_b, int row, int col)
{
	int** matrix_sum = create_matrix(row, col);	//배열의 합을 저장할 2차원 배열 동적할당으로 생성
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix_sum[i][j] = matrix_a[i][j] + matrix_b[i][j];	//matrix_sum배열 i행j열 성분에 matrix_a 배열 i행j열 성분과 matrix_b 배열 i행j열 성분의 합을 저장
		}
		printf("\n");
	}
	if (matrix_a == NULL || matrix_b == NULL) {	//데이터 후처리
		printf("메모리 할당에 실패하였습니다.\n");
		return -1;
	}
	print_matrix(matrix_sum, row, col);	//matirx_a와 matrix_b의 합을 저장한 배열인 matrix_sum을 print_matrix 함수를 이용하여 출력
	free_matrix(matrix_sum, row, col);	//만들었던 배열 matrix_sum을 동적할당 해제
	return 1;
}

/* matrix_sub = matrix_a - matrix_b */
int subtraction_matrix(int** matrix_a, int** matrix_b, int row, int col)
{
	int** matrix_sub = create_matrix(row, col);	//배열의 차를 저장할 2차원 배열 동적할당으로 생성
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix_sub[i][j]= matrix_a[i][j] - matrix_b[i][j]; //matrix_sub배열 i행j열 성분에 matrix_a 배열 i행j열 성분과 matrix_b 배열 i행j열 성분의 차를 저장
		}
		printf("\n");
	}
	if (matrix_a == NULL || matrix_b == NULL) {	//데이터 후처리
		printf("메모리 할당에 실패하였습니다.\n");
		return -1;
	}
	print_matrix(matrix_sub, row, col);	//matirx_a와 matrix_b의 차를 저장한 배열인 matrix_sub를 print_matrix 함수를 이용하여 출력
	free_matrix(matrix_sub, row, col);	//만들었던 배열 matrix_sub를 동적할당 해제
	return 1;
}

/* transpose the matrix to matrix_t */
int transpose_matrix(int** matrix, int** matrix_t, int row, int col)
{
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	for (int i = 0; i < row; i ++ ) {
		for (int j = 0; j < col; j++) {
			matrix_t[i][j] = matrix[j][i];	//전치행렬은 행의 대각성분을 기준으로 반대인 행렬이므로 행렬 matrix i행j열성분의 행,열을 반대로 저장하면 전치행렬이 됨
		}
	}
	if (matrix == NULL || matrix_t == NULL) {	//데이터 후처리
		printf("메모리 할당에 실패하였습니다.\n");
		return -1;
	}
	return 1;
}

/* matrix_axt - matrix_a x matrix_t */
int multiply_matrix(int** matrix_a, int** matrix_t, int row, int col)
{
	int** matrix_axt = create_matrix(row, row);
	
	if (row <= 0 || col <= 0) {	//데이터 전처리
		printf("행과 열이 올바르지 않습니다.\n");
		return -1;
	}
	for (int matrix_a_row = 0; matrix_a_row < row; matrix_a_row++) {
		for (int matrix_t_row = 0; matrix_t_row < row; matrix_t_row++) {	//행렬의 곱 AXB는 행렬 A의 열과 행렬 B의 행의 수가 같아야 하는데 행의 성분개수는 열의수이고 열의 성분개수는 행의 수이므로 행의 개수만큼 반복한다.
			int temp = 0;
			for (int matrix_col = 0; matrix_col < col; matrix_col++)	//행렬의 곱 AXB는 행렬 A의 열과 행렬 B의 행의 수가 같아야 하는데 행의 성분개수는 열의수이고 열의 성분개수는 행의 수이므로 열의 개수만큼 반복한다.
				temp += matrix_a[matrix_a_row][matrix_col] * matrix_t[matrix_col][matrix_t_row];	//행렬의 곱 AXB는 행렬 A의 행과 행렬 B의 열을 곱하여 더한 값이므로 두 성분을 곱한 값을 temp에 합산한다.
			matrix_axt[matrix_a_row][matrix_t_row] = temp; //모두 합산한 값을 행렬의 곱을 저장하는 공간인 배열 matrix_axt에 저장한다.
		}
	}
	
	if (matrix_t == NULL || matrix_axt == NULL) {	//데이터 후처리
		printf("메모리 할당에 실패하였습니다.\n");
		return -1;
	}
	print_matrix(matrix_axt, row, row);	//matirx_a와 matrix_t의 곱을 저장한 배열인 matrix_axt를 print_matrix 함수를 이용하여 출력
	free_matrix(matrix_axt, row, col);	//만들었던 배열 matrix_axt를 동적할당 해제
	return 1;
}

