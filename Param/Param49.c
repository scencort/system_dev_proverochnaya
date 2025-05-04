/* +Param49
Описать функцию LineCount(S) целого типа, возвращающую количество строк в текстовом файле с именем S. 
Если файл не существует, то функция возвращает −1. С помощью этой функции найти количество строк в трех файлах с данными именами.

ФИО - Поляков Ярослав Алексеевич
04.05.2025
Время выполнения: 16 минут 13 секунд
*/

#include <stdio.h>

int LineCount (char *S) {
	FILE *a = fopen(S, "r");
	if (a == NULL) {
		return -1;
	}
	
	char arr[100];
	int count = 0;
	
	while (fgets(arr, 100, a)) {
		count = count + 1;
	}
	
	fclose(a);
	return count;
}

int main() {
	char *one = "one.txt";
	char *two = "two.txt";
	char *three = "three.txt";
	
	int count_one = LineCount(one);
	int count_two = LineCount(two);
	int count_three = LineCount(three);
	
	printf("%d\n", count_one);
	printf("%d\n", count_two);
	printf("%d\n", count_three);
	
	return 0;
}
