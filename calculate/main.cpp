#include <iostream>
#include "Calculate.h"
using namespace std;

int main()
{
	double x, y, res;
	char c, exit;
	calculator cal;

	system("chcp 1251");
	while (true)
	{
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		cout << "Выберите операцию\n";
		cin >> c;
		if (y==0 && c == '/')
		{
			cout << "Ошибка деления на ноль\n";
			continue;
		} 
		cout << "Результат = " << cal.calculate(x, y, c) << "\n";
		cout << "Желаете продолжить счет? y/n \n";
		cin >> exit;
		if (exit == 'n')
			break;
	}
	return 0;
}