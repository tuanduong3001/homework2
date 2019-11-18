#include<stdio.h>
bool checkNumer(int n)
{
	while (n > 0)
	{
		int tmp = n % 10;
		if (tmp % 2 == 0)
			n /= 10;
		return false;
	}
	return true;
}
int main()
{
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	if (checkNumer(n) == true)
		printf("all even");
	else
		printf("exist odd");
}