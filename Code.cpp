#include <stdio.h>

//Đếm số chữ số 1 trong 1 số *n
int countDigits1(int n) {
	int count = 0;
	while (n > 0) {
		int temp = n % 10;
		if (temp == 1) {
			count++;
		}
		n /= 10;
	}
	return count;
}

//Tính tổng các chữ số 1 trong hàng từ 1 -> n
int sum(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += countDigits1(i);
	}
	return s;
}

//Xuất ra các số từ 1 đến n
void xuatDay(int n) {
	for (int i = 1; i <= n; i++) {
		printf("\t%d", i);
	}
}

//Nhập số n
void nhapN(int &n) {
	do {
		printf("\nNhap so n: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("\nVui long nhap so hop le!!");
		}
	} while (n <= 0);
}


int main () {
	int n, a[100];
	nhapN(n);
	xuatDay(n);
	printf("\nCo %d so 1 trong hang!!",  sum(n));
	return 0;
}