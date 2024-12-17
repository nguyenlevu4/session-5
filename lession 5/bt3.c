#include <stdio.h>

int main() {
	int n;
	int tong = 0;

	printf("Nhap vao mot so nguyen duong n: ");
	scanf("%d",&n);

	if (n <= 0) {
		printf("nhap khong hop le, nhap lai.\n");
		return 1;
	}
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	printf("Tong cac so tu 1 den %d la: %d\n", n, tong);

	return 0;
}