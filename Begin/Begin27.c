/* +Begin27
Дано число A. Вычислить A8, используя вспомогательную переменную и три операции умножения. 
Для этого последовательно находить A2, A4, A8. Вывести все найденные степени числа A. 

ФИО - Поляков Ярослав Алексеевич
03.05.2025
Время выполнения: 1 минута
*/
#include <stdio.h>

int main() {
    int a;
	scanf("%d", &a);
	
	int a2 = a * a;
	int a4 = a2 * a2;
	int a8 = a4 * a4;
	
	printf("%d\n", a2);
	printf("%d\n", a4);
	printf("%d\n", a8);

    return 0;
}
