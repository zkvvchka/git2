#include <iostream>
#include "Calculate.h"
using namespace std;

int main()
{
	double x, y, res;
	char c;
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
		if (y==0 && c == "/")
		{
			cout << "Ошибка деления на ноль";
			continue;
		}			
		res = cal.calculate; 
		cout << res;
	} 
	return 0;
}