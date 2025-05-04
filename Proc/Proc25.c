/* +Proc25 
Описать функцию IsSquare(K) логического типа, возвращающую True, если целый параметр K (> 0) является квадратом некоторого целого числа, и False в противном случае. 
С ее помощью найти количество квадратов в наборе из 10 целых положительных чисел. 

ФИО - Поляков Ярослав Алексеевич
04.05.2025
Время выполнения: 10-11 минут
*/

#include <stdio.h>
#include <stdbool.h>
#define N 10

bool IsSquare(int k) {
	for (int i = 1; i * i <= k; i = i + 1) {
		if (i * i == k) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int count = 0;
	
	int arr[N];
	
	for (int i = 0; i < N; i = i + 1) {
		if (IsSquare(arr[i])) {
			count = count + 1;
		}
	}
	
	printf("%d", count);
	return 0;
}
