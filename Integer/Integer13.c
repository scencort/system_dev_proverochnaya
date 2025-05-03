/*
Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число. 
*/
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	if (a < 100 || a > 999) {
		return 1;
	}
	
	int x = a / 100;
	int y = a % 100;
	
	int b = y * 10 + x;
	
	printf("%d\n", b);
	return 0;
}
