#include <iostream>
using namespace std;

int main()
{
	double x, y, res;
	char c;
	system("chcp 1251");
	cout << "X= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

	cout << "Выберите операцию\n";
	cin >> c;

	switch (c)
	{
	case '+': 
		res = x + y;
		break;
	case '-': 
		res = x - y;
		break;
	case '/': cout << "/";
		break;
	case '*': cout << "*";
		break;
	};
	cout << res; 

		return 0;
}