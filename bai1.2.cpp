#include<stdio.h>

int sum(int n) {
	if (n == 1) return 1;
	return n + sum(n - 1); // Đệ quy tính tổng
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", sum(n));
}