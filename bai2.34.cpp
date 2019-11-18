#include<stdio.h>
int factorialNumber(int n)
{
	int fact1 = 1;
	for (int i = 1; i <= n; i++) {
		fact1 = fact1 * i;
	}
	return fact1;
}
int factorialNumber2(int k) {
	int fact2 = 1;
	for (int i = 1; i <= k; i++) {
		fact2 = fact2 * i;
	}
	return fact2;
}
int main()
{
	int n, k;
	scanf_s("%d%d", &n, &k);
	float c;
	c = factorialNumber(n) / (float)(factorialNumber2(k) * factorialNumber(n - k));
	printf("%.2f", c);
}
