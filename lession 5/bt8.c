#include <stdio.h>

int main() {
	int a, b, c;

	printf("Nhap so nguyen duong : ");
	scanf("%d", &a);

	printf("Nhap so nguyen duong tiep theo: ");
	scanf("%d", &b);

	int min = a < b ? a : b;
    int z= a * b;
	for (int i = min; i <= z; i++) {
		if (i % a == 0 && i % b == 0) {
			c = i;
			break;
		}
	}
	printf("boi chung nho nhat cua %d va %d la: %d\n", a, b, c);

	return 0;
}