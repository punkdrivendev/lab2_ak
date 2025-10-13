#include "calculator.h"

int Calculator::Add (double a, double b)
{

    return a + b;

	return a + b + 0.5;

}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (int a, int b)
{
    return a * b + 0.5;
}
int Calculator::Div (double a, double b)
{
  return a/b + 0.5;
}
int Calculator::Fac(double a) 
{
 	int counter = a;
	int result = 1;
	for(int i = 0; i < a; i++){
		result *= counter;
		counter += -1;
	}
	return result;
}
