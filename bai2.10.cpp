#include<stdio.h>
#include<math.h>
#include <xkeycheck.h>
int flipNumber(int n)
{
	int flip = 0;
	while (n > 0)
	{
		int temp = n % 10;
		flip = flip * 10 + temp;
		n = n / 10;
	}
	return flip;
}
int main()
{
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	int result = flipNumber(n);
	printf("show me flip %d", result);
}