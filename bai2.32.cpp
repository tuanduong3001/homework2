#include<stdio.h>
int countDay(int d, int m, int y)
{
	if (m < 3)
	{
		m += 12;
		y--;
	}
	return 365 * y + y / 4 - y / 100 + y / 400 + d + (153 * m + 8) / 5;
}
int main()
{
	int  d2, m2, y2;
	scanf_s("%d%d%d", &d2, &m2, &y2);
	printf("%d", countDay(d2, m2, y2) - countDay(1, 1, y2) + 1);

}