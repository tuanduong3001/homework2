#include<stdio.h>
int main()
{
	int n, i;
	int factorial = 1;
	float s = 0, t = 0;
	printf("give me n ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = t + i;
		factorial = factorial * i;
		s = s + t / factorial;
	}
	printf("%f", s);
}
