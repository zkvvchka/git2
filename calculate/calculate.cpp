#include <iostream>
#include "Calculate.h"
using namespace std;

double calculator::calculate(double x, double y, char c)
{
	double res;
	switch (c)
	{
	case '+':
		res = x + y;
		break;
	case '-':
		res = x - y;
		break;
	case '/':
		res = x / y;
		break;
	case '*':
		res = x * y;
		break;
	};
}