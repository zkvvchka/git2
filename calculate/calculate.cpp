#include <iostream>
#include "Calculate.h"
using namespace std;

double calculator::calculate(double x, double y, char c)
{
	switch (c)
	{
	case '+':
		return(x + y);
	case '-':
		return(x - y);
	case '/':
		return(x / y);
	case '*':
		return(x * y);
	};
}