#include<stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	if ((int)sqrt(n) - sqrt(n) == 0)
	{
		printf("it is square root ");
	}
	else
	{
		printf("it is not square root");
	}
}