/*+File10
Дан файл целых чисел. Создать новый файл, содержащий те же элементы, что и исходный файл, но в обратном порядке. 

ФИО - Поляков Ярослав Алексеевич
04.05.2025
Время выполнения: около 20-25 минут (сначала решил задачку правильно, но только для цифр, то есть число 50 он записывал как 05 в файле с выводом)
*/

#include <stdio.h>
#include <string.h>

int main() {
	FILE *input, *output;
	
	input = fopen("input.txt", "r");
	if (input == NULL) {
		return 1;
	}
	
	output = fopen("output.txt", "w");
	if (output == NULL) {
		fclose(input);
		return 1;
	}
	
	int arr[100], i = 0;
	
	while (fscanf(input, "%d", &arr[i]) == 1) {
		i = i + 1;
	}
	fclose(input);
	
	for (int j = i - 1; j >= 0; j = j - 1) {
		fprintf(output, "%d ", arr[j]);
	}
	fclose(output);
	return 0;
}
