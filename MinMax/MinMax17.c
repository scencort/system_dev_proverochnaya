/* +Minmax17
Дано целое число N и набор из N целых чисел. Найти количество элементов, расположенных после последнего максимального элемента.

ФИО - Поляков Ярослав Алексеевич
04.05.2025
Время выполнения: 12 минут 40 секунд
*/

#include <stdio.h>
#define N 5

int main() {
	int count = 0;
	
	int arr[N];
	
	for (int i = 0; i < N; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	
	int maxnum = arr[0];
	int maxindex = 0;
	
	for (int i = 1; i < N; i = i + 1) {
		if (arr[i] >= maxnum) {
			maxnum = arr[i];
			maxindex = i;
		}
	}
	
//	for (int i = maxindex + 1; i < N; i = i + 1) {
//		count = count + 1;
//	}
	
	count = N - (maxindex + 1);
	
	printf("%d", count);
	return 0;
}

