#include<stdio.h>
#include<math.h>
bool isSquare(int n)
{
	if ((int)sqrt(n) - sqrt(n) == 0)
		return true;
	else
		return false;
}
int countNumber(int n)
{
	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (isSquare(i))
			count++;
	}
	return count;
}
int main()
{
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	printf("%d", countNumber(n));
}
