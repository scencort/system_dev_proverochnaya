/* +Array43
Дан целочисленный массив размера N, все элементы которого упорядочены (по возрастанию или по убыванию). 
Найти количество различных элементов в данном массиве. 

ФИО - Поляков Ярослав Алексеевич
04.05.2025
Время выполнения: 3 минуты 52 секунды
*/

#include <stdio.h>
#define N 5

// 1 1 1 2 3

int main() {
	
	int count = 1;
	int arr[N];
	
	for (int i = 0; i < N; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < N - 1; i = i + 1) {
		if (arr[i] != arr[i + 1]) {
			count = count + 1;
		}
	}
	
	printf("%d", count);
	
	return 0;
	
}
