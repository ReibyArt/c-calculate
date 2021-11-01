// c++ calculate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	// Подключаем Calculator.h
	// Определяем переменные, которые нам нужны.

	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "Hello, my Friend!\n";
	cout << "This is a Calculator!\n";
	cout << "Calculator Console Aplication" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	
	Calculator My;

	while (true)
	{
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0)
		{
			cout << "Division by 0 exception!" << endl;
			continue;
		}
		else {
			result = My.Calculate(x, oper, y);
		}
		
		cout << "Result = : " << result << endl;
	}
	
	return 0;
}

// My - это это экземпляр класса Calculate

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
