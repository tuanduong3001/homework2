#include<stdio.h>
bool isPerfect(int n)
{
	int s = 0;
	if (n < 6)
		return false;
	else
	{
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
				s += i;
		}
		if (s == n)
			return true;
		else
			return false;
	}

}
int main()
{
	int n, i;
	printf("give me n ");
	scanf_s("%d", &n);
	for (i = 6; i <= n; i++)
	{
		if (isPerfect(i))
			printf("%d \n", i);
	}

}