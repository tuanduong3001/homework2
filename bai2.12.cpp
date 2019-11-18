#include<stdio.h>
#include<math.h>
int biggestNumber(int n)
{
	int max = 0;
	while (n > 0)
	{
		int tmp = n % 10;
		if (tmp >= max) max = tmp;
		n = n / 10;
	}
	return max;
}
int main()
{
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	int result = biggestNumber(n);
	printf("show me biggest %d", result);
}
