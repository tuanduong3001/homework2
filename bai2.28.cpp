#include<stdio.h>
#include<math.h>
float calculaateTotal(int n, float x)
{
	int s = 0;
	int t = 0;
	for (int i = 1; i <= n; i++) {
		int factorial = 1;
		factorial = factorial * i;
		t = pow(x, i);
		s += t / factorial;
	}
	return s + 1;
}
int main()
{
	int n;
	float x;
	printf("give me x ");
	scanf_s("%f", &x);
	printf("give me n ");
	scanf_s("%d", &n);
	float result = calculaateTotal(n,x);
	printf("%.2f", result);
}