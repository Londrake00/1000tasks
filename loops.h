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

//FindLengthOfSegment(5, 1.3, 5.3, [](double h, int i, double a) { return a + (h * i); }); // for29 
//FindLengthOfSegment(5, 1.3, 5.3, [](double h, int i, double a) { return sin(a + (h * i)); }); // for30 

template<class T, class Operation> //for 31, 32
void PrintSequence(T n, T init, Operation func)
{
	double a = init;
	std::cout << a << std::endl;
	for (int i = 1; i <= n; i++)
	{
		std::cout << func(a, i) << std::endl;
		a = func(a, i);
	}
}

//PrintSequence(5.0, 2.0, [](double a, int i) {return 2 + (1 / a);}); //for 31
//PrintSequence(5.0, 1.0, [](double a, int i) {return (a + 1) / i;}); //for 32

template <class T, class Operation> //for 33-35
void Fibonacci(int n, T a1, T a2, T a3, int init, Operation func)
{
	T ak = 0;
	if (a3 != 0)
	{
		std::cout << a1 << std::endl << a2 << std::endl << a3 << std::endl;
		for (int i = init; i <= n; i++)
		{
			ak = func(a1, a2, a3);
			a1 = a2;
			a2 = a3;
			a3 = ak;
			std::cout << ak << std::endl;
		}
	}
	else
	{
		std::cout << a1 << std::endl << a2 << std::endl;
		for (int i = init; i <= n; i++)
		{
			ak = func(a1, a2, a3);
			a1 = a2;
			a2 = ak;
			std::cout << ak << std::endl;
		}
	}
	
	
}

//Fibonacci(5, 1, 1, 0, 3, [](int a1, int a2,) {return a1 + a2;}); //for 33
//Fibonacci(5, 1.0, 2.0, 0.0, 3, [](double a1, double a2,) {return (a1 + 2 * a2) / 3;}); //for 34
//Fibonacci(5, 1.0, 2.0, 3.0, 4, [](double a1, double a2, double a3) {return (a3 + a2 - 2 * a1) / 3;}); //for 35

template <class T> //for 36, 37
T SumWithPower(int n, int k, int init)
{
	T sum = 0;
	if (k != 0)
	{
		for (int i = 0; i <= n; i++)
		{
			sum += pow(i, k);
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			sum += pow(i, i);
		}
	}
	return sum;
}

int for36 = SumWithPower<int>(7, 3, 0);
int for37 = SumWithPower<int>(5, 0, 1);

template <class T> // for 38
T SumWithDecreasingPower(int n)
{
	int power = n;
	T sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(i, power);
		power--;
	}
	return sum;
}

int for38 = SumWithDecreasingPower<int>(5);

template <class T> //for 39
void PrintNumbersItslefTimes(T a, T b)
{
	for (a; a <= b; a++)
	{
		for (int i = 0; i < a; i++)
		{
			std::cout << a << std::endl;
		}
	}
}

//PrintNumberItselfTimes(1, 10); //for 39

template<class T> //for 40
void PrintNumberOneMoreTime(T a, T b)
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

//PrintNumberOneMoreTime(1, 10); //for 40
