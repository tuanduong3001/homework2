#include<stdio.h>
#include<math.h>
int smallSum(int a, int b, int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if ((i % a == 0) && (i % b != 0))
		{
			s += i;
		}
	}
	return s;
}
int main()
{
	int a, b, n;
	int s = 0;
	scanf_s("%d%d%d", &a, &b, &n);
	int result = smallSum(a, b, n);
	printf("%d",result);
}
