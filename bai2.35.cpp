#include<iostream>


using namespace std;
int greatestCommondivisor(int a,int b)
{
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int numerator = a * d + b * c;
	int denominator = b * d;
	if ((float)denominator / greatestCommondivisor(numerator, denominator) == 1)
		cout << (float)numerator / greatestCommondivisor(numerator, denominator);
	else
		cout << (float)numerator / greatestCommondivisor(numerator, denominator) << "/" << (float)denominator / greatestCommondivisor(numerator, denominator);
}
