#include <iostream>
#include <Windows.h>
#include <string>

class Counter
{
private:

	int value;

public:
	Counter() : value(1) {}
	Counter(int initValue) : value(initValue) {}

	int increase() { return ++value; }
	int decrease() { return --value; }
	int getValue() { return value; }

	void reset(int newValue) { value = newValue; }
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::string userAnswer;
	int userValue;

	Counter counter;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> userAnswer;

	if (userAnswer == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> userValue;

		counter.reset(userValue);
	}
	else if (userAnswer == "нет")
	{
	}
	else
	{
		std::cout << "Некорректный ввод. Используется значение по умолчанию (1)." << std::endl;
	}

	char comand;
	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> comand;

		if (comand == '+')
		{
			counter.increase();
		}
		else if (comand == '-')
		{
			counter.decrease();
		}
		else if (comand == '=')
		{
			std::cout << counter.getValue() << std::endl;
		}
		else if (comand == 'x')
		{
			std::cout << "До свидания!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Неверная команда. Попробуйте снова." << std::endl;
		}
	}


	return 0;
}