#include<stdio.h>
/*int main()
{
	int n, i;
	float s = 0;
	printf("give me n ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s = s + 1 / (float)i; // Dùng vòng lặp for để tính tổng
	}
	printf("show me s %f", s);
}*/
float sum(int n)
{
	if (n == 1) return 1;
	return 1 / (float)n + sum(n - 1);  // Dùng đệ quy để tính tổng 
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%f", sum(n));
}