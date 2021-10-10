#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string operation[] = { "+", "-", "*", "/", "sin", "cos" };
int operationSize = 6;

float addition(float value1, float value2)
{
	return value1 + value2;
}

float subtraction(float value1, float value2)
{
	return value1 - value2;
}

float multiplication(float value1, float value2)
{
	return value1 * value2;
}

float division(float value1, float value2)
{
	return value1 / value2;
}

float Sin(float angle)
{
	return sin(angle);
}

float Cos(float angle)
{
	return cos(angle);
}

float getUserInput()
{
	cout << "Enter a value: ";
	float value;
	cin >> value;

	return value;
}

string getOperation()
{
	cout << "Enter operation: ";
	string op;
	cin >> op;

	return op;
}

int compareOperation(string op)
{
	for (int i = 0; i < operationSize; i++)
	{
		if (op == operation[i])
			return i;
	}
	return -1;
}

void printResult(float result)
{
	cout << "Result: " << result << endl;
}

void calculator()
{
	float value1, value2;
	float result;

	string op = getOperation();

	int indexOp = compareOperation(op);
	switch (indexOp)
	{
	case 0:
		value1 = getUserInput();
		value2 = getUserInput();
		result = addition(value1, value2);
		break;

	case 1:
		value1 = getUserInput();
		value2 = getUserInput();
		result = subtraction(value1, value2);
		break;

	case 2:
		value1 = getUserInput();
		value2 = getUserInput();
		result = multiplication(value1, value2);
		break;

	case 3:
		value1 = getUserInput();
		value2 = getUserInput();
		result = division(value1, value2);
		break;

	case 4:
		value1 = getUserInput();
		result = Sin(value1);
		break;

	case 5:
		value1 = getUserInput();
		result = Cos(value1);
		break;

	default:
		cout << "This operation is not defined yet!" << endl;
		system("pause");
		return;
	}

	printResult(result);
	system("pause");
}

void otherProgram()
{
	cout << "This program is under construction" << endl;
	system("pause");
}

int main()
{

	int choice;

	do
	{
		cout << "__________________Program list__________________" << endl;
		cout << "(1) - Calculator" << endl;
		cout << "(2) - Other program" << endl;
		cout << "(0) - Exit" << endl;
		cout << "Enter your choice: "; cin >> choice;
		cout << "________________________________________________" << endl;

		switch (choice)
		{
		case 1:
			calculator();
			break;

		case 2:
			otherProgram();
			break;

		default:
			break;
		}

		system("cls");
	} while (choice != 0);

	system("pause");
	return 0;
}
