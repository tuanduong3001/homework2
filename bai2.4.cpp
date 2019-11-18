#include<stdio.h>
/*int main()
{
	int n, i;
	int s = 1;
	printf("give me n ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s = s * i;
	}
	printf("show me s %d", s);
}*/
int sum(int n)
{
	if (n == 1) return 1;
	return n * sum(n - 1); // Dùng đệ quy để tính tổng
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", sum(n));
}