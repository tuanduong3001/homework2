#include<stdio.h>
#include<math.h>
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
	if (n < 10)
	{
		printf("that number is always symmetrical");
	}
	else
	{
		int result = flipNumber(n);
		if (result == n)
			printf("that number is symmetrical");
		else 
			printf("that number isnot symmetrical");
	}
	


}

