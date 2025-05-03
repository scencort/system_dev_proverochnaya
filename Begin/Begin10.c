/* -Begin10
Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов. 

ФИО - Поляков Ярослав Алексеевич
03.05.2025
Время выполнения: 2 минуты 56 секунд
*/
#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    if (a == 0 || b == 0) {
        return 1;
    }

    double a2 = a * a;
    double b2 = b * b;

    double summa = a2 + b2;
    double raznost = a2 - b2;
    double proizvedenie = a2 * b2;
    double chastnoe = a2 / b2;

    printf("%.2lf\n", summa);
    printf("%.2lf\n", raznost);
    printf("%.2lf\n", proizvedenie);
    printf("%.2lf\n", chastnoe);

    return 0;
}
