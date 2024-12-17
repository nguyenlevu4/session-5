#include <stdio.h>

int main() {

	for (int n = 2; n <= 9; n++) {
		printf("Bang cuu chuong  %d:\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", n, i, n * i);
		}
		printf("\n");
	}
	return 0;
}