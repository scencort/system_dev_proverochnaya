/* +Matrix49
Дана матрица размера M × N. Преобразовать матрицу, поменяв местами минимальный и максимальный элемент в каждой строке.

ФИО - Поляков Ярослав Алексеевич
04.05.2025
Время выполнения: 18-20 минут
*/

#include <stdio.h>
#define N 3
#define M 3

// 1 2 3
// 4 5 6
// 7 8 9

void sweetch(int a[M][N])
{
	for (int i = 0; i < M; i = i + 1) {
		int min = a[i][0];
		int max = a[i][0];
		int minindex = 0;
		int maxindex = 0;

		for (int j = 1; j < N; j = j + 1) {
			if (a[i][j] < min) {
				min = a[i][j];
				minindex = j;
			}
			if (a[i][j] > max) {
				max = a[i][j];
				maxindex = j;
			}	
		}
		
		int temp = a[i][maxindex];
		a[i][maxindex] = a[i][minindex];
		a[i][minindex] = temp;
	}
}

void print(int a[M][N]) 
{
	for (int i = 0; i < M; i = i + 1) {
		for (int j = 0; j < N; j = j + 1) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr[M][N];
	
	for (int i = 0; i < M; i = i + 1) {
		for (int j = 0; j < N; j = j + 1) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\n");
	print(arr);
	printf("\n");
	sweetch(arr);
	printf("\n");
	print(arr);
	
	return 0;
}

