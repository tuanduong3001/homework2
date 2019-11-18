#include<stdio.h>
#include<math.h>
bool isSquare(int n)
{
	if ((int)sqrt(n) - sqrt(n) == 0)
		return true;
	else
		return false;
}
int main()
{
	int n, i;
	printf("give me n ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (isSquare(i))
			printf("%d \n", i);
	}
		
}