#include<stdio.h>
int main()
{
	int n;
	printf("nhap so tien ");
	scanf_s("%d", &n);
	int count100000 = 0;
	int count50000 = 0;
	int count20000 = 0;
	int count10000 = 0;
	while (n > 0)
	{
		if (n >= 100000)
		{
			n -= 100000;
			count100000++;
		}
		if (n < 100000 && n >= 50000)
		{
			n -= 50000;
			count50000++;
		}
		if (n < 50000 && n >= 20000)
		{
			n -= 20000;
			count20000++;
		}
		if (n < 20000 && n >= 10000)
		{
			n -= 10000;
			count10000++;
		}
	}
	printf("so to 100000 la %d \n", count100000);
	printf("so to 50000 la %d \n", count50000);
	printf("so to 20000 la %d \n", count20000);
	printf("so to 10000 la %d \n", count10000);
	
}