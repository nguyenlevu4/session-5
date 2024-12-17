#include <stdio.h>

int main() {
	int a, b, cc;

	printf("Nhap so nguyen duong : ");
	scanf("%d", &a);

	printf("Nhap so nguyen duong tiep theotheo: ");
	scanf("%d", &b);

	int min = a < b ? a : b;

	for (int i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			cc = i;
			break;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, cc);

	return 0;
}