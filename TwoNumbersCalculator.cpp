#include <iostream>
#include <Windows.h>

class Calculator
{
private:
	double num1;
	double num2;

public:
	

	Calculator() : num1(0.0), num2(0.0)
	{
	}

	double add() { return num1 + num2; }
	double multiply() { return num1 * num2; }
	double subtract_1_2() { return num2 - num1; }
	double subtract_2_1() { return num1 - num2; }
	double divide_1_2() { return num1 / num2; }
	double divide_2_1() { return num2 / num1; }

	bool set_num1(double newNum1)
	{
		if (newNum1 != 0)
		{
			num1 = newNum1;
			return true;
		}
		return false;
	}

	bool set_num2(double newNum2)
	{
		if (newNum2 != 0)
		{
			num2 = newNum2;
			return true;
		}
		return false;
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double userNum1, userNum2;

	while (true)
	{
		do {
			std::cout << "Введите num1: ";
			std::cin >> userNum1;
			if (userNum1 == 0) {
				std::cout << "Неверный ввод!\n";
			}
		} while (userNum1 == 0);


		do {
			std::cout << "Введите num2: ";
			std::cin >> userNum2;
			if (userNum2 == 0) {
				std::cout << "Неверный ввод!\n";
			}
		} while (userNum2 == 0);


		Calculator calculator;

		calculator.set_num1(userNum1);
		calculator.set_num2(userNum2);

		std::cout << "num1 + num2 = " << calculator.add() << std::endl;
		std::cout << "num1 - num2 = " << calculator.subtract_2_1() << std::endl;
		std::cout << "num2 - num1 = " << calculator.subtract_1_2() << std::endl;
		std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;

	}

	return 0;
}