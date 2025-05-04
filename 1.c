#include <stdio.h>
#include <stdbool.h>

bool IsPalindrome(int k) {
	int or = k;
	int reverse = 0;
	
	while (k > 0) {
		int temp = k % 10;
		reverse = reverse * 10 + temp;
		k = k / 10;
	}
	
	return or == reverse;
}

int main() {
	int count = 0;
	int a;
	
	for (int i = 0; i < 3; i = i + 1) {
		scanf("%d", &a);
		
		if (a > 0 && IsPalindrome(a)) {
			count = count + 1;
		}
	}
	
	printf("kolvo = %d\n", count);
	
	return 0;
}
