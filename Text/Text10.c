/* +Text10
Дано целое число K и текстовый файл. Вставить пустую строку после строки файла с номером K. Если строки с таким номером нет, то оставить файл без изменений.

ФИО - Поляков Ярослав Алексеевич
04.05.2025
Время выполнения: около 13-14 минут
*/

#include <stdio.h>

int main() {
	int k;
	scanf("%d", &k);
	
	FILE *input = fopen("in.txt", "r");
	if (!input) {
		return 1;
	}
	
	FILE *output = fopen("out.txt", "w");
	if (!output) {
		fclose(input);
		return 1;
	}
	
	char arr[100];
	int curr = 1;
	
	while (fgets(arr, 100, input)) {
		fputs(arr, output);
		if (curr == k) {
			fputc('\n', output);
		}
		curr++;
	}
	
	fclose(input);
	fclose(output);
	
	return 0;
}

