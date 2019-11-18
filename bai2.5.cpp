#include<stdio.h>
int main()
{
	int n, i;
	int factorial = 1;
	int s = 0;
	printf("give me n ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;  // Dùng vòng lặp for để tính tổng
		s = s + factorial;
	}
	printf("show me s %d", s);
}
