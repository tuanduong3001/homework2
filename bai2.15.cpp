#include<stdio.h>
int main()
{
	int n, tmp1 , k = 0, i = 0, tmp2;
	printf("give me n ");
	scanf_s("%d", &n);
	tmp1 = n % 10;
	n /= 10;
	while (n != 0)
	{
		tmp2 = n % 10;
		if (tmp1 > tmp2)
			i = 1;
		if (tmp1 < tmp2)
			k = 1;
		tmp1 = tmp2;
		n /= 10;

	}
	if ((i == 1) && (k == 0))
	{
		printf("increase");
	}
	if ((i == 0) && (k == 1))
	{
		printf("decrease");
	}
	if ((k == 0) && (i == 0) || (k == 1) && (i == 1))
	{
		printf("neither increase nor decrease");
	}
}