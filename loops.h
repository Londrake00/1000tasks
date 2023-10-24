#pragma once

template<class T>
void PrintNumberSomeTimes(T n, T k) // for 1
{
	for (int i = 0; i < n; i++)
	{
		std::cout << k << std::endl;
	}
}

template <class T>
void PrintNumbersInAscendingOrder(T a, T b) // for 2
{
	int count = 0;
	for (; a <= b; a++) 
	{
		std::cout << a << std::endl;
		count++;
	}
	std::cout << count << std::endl;
}

template <class T>
void PrintNumberInDescendingOrder(T a, T b) // for 3
{
	int count = 0;
	b--;
	for (; a < b; b--)
	{
		std::cout << b << std::endl;
		count++;
	}
	std::cout << count << std::endl;
}

template <typename T>
void CalculatePrice(T price, T start, T end, T step) // for 4, 5, 6
{
	for (T kg = start; kg <= end; kg += step)
	{
		std::cout << price * kg << std::endl;
	}
}

template <class T, class Operation>
T CalculateSum(T a, T b, T init, Operation func) // for 7, 8, 9
{
	T sum = init;
	for (; a <= b; a++)
	{
		sum = func(sum, a);
	}
	return sum;
}

int for7 = CalculateSum(1, 10, 0, [](int a, int b) {return a + b;});

int for8 = CalculateSum(1, 10, 1, [](int a, int b) {return a * b;});

int for9 = CalculateSum(1, 10, 1, [](int a, int b) {return a + b * b;});

template<class T, class Operation> //for 10, 11
T CalculateSumUsingFormula(int n, T init, T start, Operation func)
{
	T sum = init;
	for (int i = start; i <= n; i++)
	{
		sum += func(n, i);
	}
	return sum;
}

double for10 = CalculateSumUsingFormula(10, 0.0, 1.0, [](int a, int b) {return 1.0 / b;});

int for11 = CalculateSumUsingFormula(10, 0, 0, [](int a, int b) {return (a + b) * (a + b);});

template<class T> //for 12
T CalculateProductWithStep(int n, T step)
{
	T product = 1 + step;
	int multiplier = 2;
	for (double i = product + step; multiplier <= n; multiplier++)
	{
		product *= i;
		i += step;
	}
	return product;
}

double for12 = CalculateProductWithStep(5, 0.1);

template <class T> //for 13
double FindValeOfExpressionWithAlternation(T n)
{
	T count = 0;
	double sum = 0;
	for (double i = 1.1; count <= n; count++, i += 0.1)
	{
		count % 2 == 0 ? sum += i : sum -= i;
	}
	return sum;
}

double for13 = FindValeOfExpressionWithAlternation(7);

template<class T> //for 14
T FindSquareOfNumberUsingFormula(T n)
{
	T sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += (2 * i) - 1;
	}
	return sum;
}

int for14 = FindSquareOfNumberUsingFormula(5);

template<class T>//for 15
int FindPowerOfNumber(T a, int n)
{
	T result = a;
	for (int i = 0; i < n; i++)
	{
		result *= a;
	}
	return result;
}

int for15 = FindPowerOfNumber(3.5, 5);

template<class T> //for 16
void PrintNaturalPowersOfNumber(T a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		std::cout << pow(a, i) << std::endl;
	}
}

template<class T, class Operation> //for 17, 18
T FindValueOfExpressionWithPower(T a, int n, Operation func)
{
	T result = func(a, 0);
	for (int i = 1; i <= n; i++) {
		result += func(a, i);
	}
	return result;
}

double for17 = FindValueOfExpressionWithPower(3.5, 5, [](double a, int i) {return pow(a, i);});
double for18 = FindValueOfExpressionWithPower(3.5, 5, [](double a, int i) {return (i % 2 == 0) ? -pow(a, i) : pow(a, i);});


double fact(int num) //for 19
{
	if (num == 0 || num == 1)
		return 1;
	return num * fact(num - 1);
}

template<class T, class Operation> //for 20, 21
T CalculateExpression(T n, Operation func)
{
	T result = 0.0;
	for (int i = 1; i <= n; i++)
	{
		result += func(i);
	}
	return result;
}

double for20 = CalculateExpression(5.0, [](int i) {return fact(i);});
double for21 = CalculateExpression(5.0, [](int i) {return 1 / fact(i);});

template<class T, class Operation> //for 22, 24-28
T FindValueOfMathFunction(T x, int n, Operation func)
{
	T result = 0;
	for (int i = 0; i <= n; i++)
	{
		result += func(x,i);
	}
	return result;
}

double for22 = FindValueOfMathFunction(3.5, 4, [](double x, int i) {return pow(x, i) / fact(i);});
double for24 = FindValueOfMathFunction(3.5, 4, [](double x, int i) {return pow(-1, i) * pow(x, 2 * i) / fact(2 * i);});
double for25 = FindValueOfMathFunction(3.5, 4, [](double x, int i) {return pow(-1, i - 1) * pow(x, i) / i;});
double for26 = FindValueOfMathFunction(3.5, 4, [](double x, int i) {return pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);});
double for27 = FindValueOfMathFunction(3.5, 4, [](double x, int i) {return (2 * i - 1) * pow(x, 2 * i + 1) / (2 * i) * (2 * i + 1);});
double for28 = FindValueOfMathFunction(3.5, 4, [](double x, int i) {return pow(-1, 4 - 1) * (2 * 4 - 3) * pow(x, 4) / 2 * 4;});

template<class T, class Operation> //for 23
T FindValueOfMathFunctionFor23(T x, int n, Operation func)
{
	T result = 0;
	for (int i = 0; i <= n; i++)
	{
		result = func(result, x, i);
	}
	return result;
}

double for23 = FindValueOfMathFunctionFor23(3.5, 4, [](double result, double x, int i) {return i % 2 == 0 ? result -= std::pow(x, i) / fact(i) : result += std::pow(x, i) / fact(i);});

template<class T, class Operation>
void FindLengthOfSegment(int n, T a, T b, Operation func)
{
	double h = (b - a) / n;
	std::cout << h << std::endl;
	for (int i = 0; i <= n; i++)
	{
		std::cout << func(h, i, a) << std::endl;
	}
}

//FindLengthOfSegment(5, 1.3, 5.3, [](double h, int i, double a) { return a + (h * i); }); // for29 (для корректной работы вызывайте функцию в main'е)
//FindLengthOfSegment(5, 1.3, 5.3, [](double h, int i, double a) { return sin(a + (h * i)); }); // for30 (для корректной работы вызывайте функцию в main'е)


void for31(int n)
{
	double a = 2;
	std::cout << a << std::endl;
	for (int i = 1; i <= n; i++)
	{
		std::cout << 2 + (1 / a) << std::endl;
		a = 2 + (1 / a);
	}
}

void for32(int n)
{
	double a = 1;
	std::cout << a << std::endl;
	for (int i = 1; i <= n; i++)
	{
		std::cout << (a + 1) / i;
		a = (a + 1) / i;
	}
}

void for33(int n)
{
	int a1 = 1, a2 = 1, an = 0;
	for (int i = 3; i <= n; i++)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
		std::cout << an << std::endl;
	}
}

void for34(int n)
{
	double a1 = 1, a2 = 2, ak = 0;
	for (int i = 3; i <= n; i++)
	{
		ak = (a1 + 2 * a2)/3;
		a1 = a2;
		a2 = ak;
	}
}

void for35(int n)
{
	double a1 = 1, a2 = 2, a3 = 3, ak = 0;
	for (int i = 4; i <= n; i++)
	{
		ak = (a3 + a2 - 2 * a1) / 3;
		a1 = a2;
		a2 = a3;
		a3 = ak;
	}
}

double for36(int n, int k)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += pow(i, k);
	}
	return sum;
}

double for37(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(i, i);
	}
	return sum;
}

double for38(int n)
{
	int power = n;
	double sum = 0;
	for (int i = 1; i <= n; i++, power--)
	{
		sum += pow(i, power);
	}
	return sum;
}

void for39(int a, int b)
{
	for (a; a <= b; a++)
	{
		for (int i = 0; i < a; i++)
		{
			std::cout << a << std::endl;
		}
	}
}

void for40(int a, int b)
{
	for (int i = 1; a <= b; i++, a++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << a << std::endl;
		}
		std::cout << std::endl;
	}
}