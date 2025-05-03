/* +Case12
Элементы окружности пронумерованы следующим образом: 1 — радиус R, 2 — диаметр D = 2·R, 3 — длина L = 2·π·R, 4 — площадь круга S = π·R2. 
Дан номер одного из этих элементов и его значение. 
Вывести значения остальных элементов данной окружности (в том же порядке). 
В качестве значения π использовать 3.14. 

ФИО - Поляков Ярослав Алексеевич
03.05.2025
Время выполнения: 11 минут 48 секунд (возможно мог и быстрее, но в логике вычисления радиуса из каждого выражения были проблемки, а так же много времени ушло на тестирование)
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
	int a;
	double peremennaya;
	double r, d, L, s;
	scanf("%d", &a);
	
	if (a < 1 || a > 4) {
		return 1;
	}
	
	scanf("%lf", &peremennaya);
	
	switch (a) {
	case 1:
		r = peremennaya;
		break;
	case 2:
		r = peremennaya / 2;
		break;
	case 3:
		r = peremennaya / (2 * PI);
		break;
	case 4:
		r = pow(peremennaya / PI, 0.5);
		break;
	}
	
	d = 2 * r;
	L = 2 * PI * r;
	s = PI * r  * r;
	
	printf("%.2lf\n", r);
	printf("%.2lf\n", d);
	printf("%.2lf\n", L);
	printf("%.2lf\n", s);
	
	return 0;	
}
