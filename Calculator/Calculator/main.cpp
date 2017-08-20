#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	float val1, val2, result;
	char operand;
	char option;

	cout << "Welcome to a calculator written in C++." << flush << endl;
	system("pause");

calc:
	cout << "Value #1:" << flush << endl;
	cin >> val1;

	cout << "Value #2:" << flush << endl;
	cin >> val2;

	system("CLS");
	cout << "Choose an operator: *, /, +, -" << flush << endl;
	cin >> operand;

	switch (operand)
	{
	case '*':
		result = val1 * val2;
		cout << "Result: " << result << flush << endl;
		break;

	case '/':
		result = val1 / val2;
		cout << "Result: " << result << flush << endl;
		break;

	case '+':
		result = val1 + val2;
		cout << "Result: " << result << flush << endl;
		break;

	case '-':
		result = val1 - val2;
		cout << "Result: " << result << flush << endl;
		break;

	default:
		cout << "No applicable operator found." << flush << endl;
		system("pause");
		goto calc;
	}


	cout << "Would you like to calculate some more? (Y | N)" << flush << endl;
	cin >> option;

	switch (option)
	{
	case 'Y':
		goto calc;
		break;

	case 'N':
		system("exit");
		break;

	case 'y':
		goto calc;
		break;

	case 'n':
		system("exit");
		break;

	default:
		cout << "No applicable answer found." << flush << endl;
		break;
	}

	return 0;
}