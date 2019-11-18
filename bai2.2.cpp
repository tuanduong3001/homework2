/*#include<stdio.h>
int main()
{
	int i, n;
	int s = 0;
	printf("give me n ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s = s + i * i;
	}
	printf("show me s %d", s); // Vòng lặp for
}*/
#include<stdio.h>
int sum(int n)
{
	if (n*n == 1) return 1;
	return n * n + sum(n - 1); // Dùng đệ quy tính tổng
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", sum(n));

}