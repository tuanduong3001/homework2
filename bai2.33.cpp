#include<stdio.h>
int countDay(int d, int m, int y)
{
	if (m < 3) {
		m += 12;
		y--;
	}
	return 365 * y + y / 4 - y / 100 + y / 400 + d + (m * 153 + 8) / 5;
}
int main()
{
	int d1, m1, y1;
	scanf_s("%d%d%d", &d1, &m1, &y1);
	printf("%d", countDay(1, 1, y1 + 1) - countDay(d1, m1, y1));
}