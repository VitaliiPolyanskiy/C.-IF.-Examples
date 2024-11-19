#include <iostream>
using namespace std;

int main()
{
	//  Определить четность вводимого с клавиатуры числа. 
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "The number is even!\n";
	}
	else
	{
		cout << "The number is odd!\n";
	}

	// Ввести два числа и найти меньшее из них.
	int a, b, c;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	if (a < b)
	{
		cout << "Minimum: " << a << endl;
	}
	else if (b < a)
	{
		cout << "Minimum: " << b << endl;
	}
	else
	{
		cout << "Numbers are equal!\n";
	}

	// Ввести три числа и найти наибольшее из них. 
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << "Maximum: " << a << endl;
	}
	else if (b >= a && b >= c)
	{
		cout << "Maximum: " << b << endl;
	}
	else
	{
		cout << "Maximum: " << c << endl;
	}

	// Ввести с клавиатуры символ. Определить является ли он буквой.
	char symbol;
	cout << "Enter a symbol: ";
	cin >> symbol;
	if (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z')
		cout << "Symbol is a letter!\n";
	else
		cout << "Symbol is not a letter!\n";

	// Ввести координаты прямоугольника и нормализовать его при необходимости.
	int left, top, right, bottom, temp;
	cout << "Enter the coordinates of the upper left corner of the rectangle: ";
	cin >> left >> top;
	cout << "Enter the coordinates of the lower right  corner of the rectangle: ";
	cin >> right >> bottom;
	if (left > right)
	{
		temp = left;
		left = right;
		right = temp;
	}
	if (top > bottom)
	{
		temp = top;
		top = bottom;
		bottom = temp;
	}
	cout << "Upper left corner: (" << left << ", " << top << ")\n";
	cout << "Lower right corner: (" << right << ", " << bottom << ")\n";

	return 0;
}