#pragma once

void for1(int k, int n)
{
	for (int i = 0; i < k; i++)
	{
		std::cout << k << std::endl;
	}
}

void for2(int a, int b)
{
	int count = 0;
	for (a; a <= b; a++)
	{
		std::cout << a << std::endl;
		count++;
	}
	std::cout << count << std::endl;
}

void for3(int a, int b)
{
	int count = 0;
	b--;
	for (; a < b; count++, b--)
	{
		std::cout << b << std::endl;
	}
	std::cout << count << std::endl;
}

void for4(double price)
{
	for (int kg = 1; kg <= 10; kg++)
	{
		std::cout << price * kg << std::endl;
	}
}

void for5(double price)
{
	for (double kg = 0.1; kg <= 10; kg += 0.1)
	{
		std::cout << price * kg << std::endl;
	}
}

void for6(double price)
{
	for (double kg = 1.0; kg <= 2; kg += 0.2)
	{
		std::cout << price * kg << std::endl;
	}
}

int for7(int a, int b)
{
	int sum = 0;
	for (; a <= b; a++)
	{
		sum += a;
	}
	return sum;
}

int for8(int a, int b)
{
	int sum = 0;
	for (; a <= b; a++)
	{
		sum *= a;
	}
	return sum;
}

int for9(int a, int b)
{
	int sum = 0;
	for (; a <= b; a++)
	{
		sum += a*a;
	}
	return sum;
}

double for10(int n)
{
	double sum = 0;
	for (int i = 1; i <= n;i++)
	{
		sum += 1.0 / i;
	}
	return sum;
}

double for11(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += pow(n + i, 2);
	}
	return sum;
}

double for12(int n)
{
	double sum = 0;
	for (double i = 1.0; i <= n; i++)
	{
		sum *= (i + 10) / 10;
	}
	return sum;
}

double for13(int n)
{
	int count = 0;
	double sum = 0;
	for (double i = 1.1; count <= n; count++, i += 0.1)
	{
		count % 2 == 0 ? sum += i : sum -= i;
	}
	return sum;
}

int for14(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += (2 * i) - 1;
	}
	return sum;
}

double for15(double a, int n)
{
	double result = a;
	for (int i = 0; i < n; i++)
	{
		result *= a;
	}
	return result;
}

void for16(double a, int n)
{
	for (int i = 1; i <= n;i++)
	{
		std::cout << pow(a, i) << std::endl;
	}
}

double for17(double a, int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += pow(a, i);
	}
	return sum;
}

double for18(double a, int n)
{
	double sum = 1;
	for (int i = 0; i <= n; i++)
	{
		i % 2 == 0 ? sum -= pow(a, i) : sum += pow(a, i);
	}
	return sum;
}

double fact(int num) //for 19
{
	if (num == 0 || num == 1)
		return 1;
	return num * fact(num - 1);
}

double for20(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += fact(i);
	}
	return sum;
}
double for21(int n)
{
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result += 1 / fact(i);
	}
	return result;
}

double for22(double x, int n)
{
	double result = 0;
	for (int i = 0; i <= n; i++)
	{
		result += pow(x, i) / fact(i);
	}
	return result;
}

double for23(double x, int n)
{
	double result = 0;
	for (int i = 0; i <= n; i += 2)
	{
		i % 2 == 0 ? result -= std::pow(x, i) / fact(i) : result += std::pow(x, i) / fact(i);
	}
	return result;
}

double for24(double x, int n)
{
	double result = 0;
	for (int i = 0;i <= n;++i)
	{
		result += pow(-1, i) * pow(x, 2 * i) / fact(2 * i);
	}
	return  result;
}

double for25(double x, int n)
{
	double result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += pow(-1, i - 1) * pow(x, i) / i;
	}
	return result;
}

double for26(double x, int n)
{
	double result = 0;
	for (int i = 0; i <= n; i++)
	{
		result += pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
	}
	return result;
}
double for27(double x, int n)
{
	double result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += (2 * i - 1) * pow(x, 2 * i + 1) / (2 * i) * (2 * i + 1);
	}
	return result;
}

double for28(double x, int n)
{
	double result = 0;
	for (int i = 0; i <= n; i++)
	{
		result += pow(-1, n - 1) * (2 * n - 3) * pow(x, n) / 2 * n;
	}return result;
}

void for29(int n, double a, double b)
{
	double h = (b - a) / n;
	std::cout << h << std::endl;
	for (int i = 0; i <= h; i++)
	{
		std::cout << a + (h * i) << std::endl;
	}
}

void for30(int n, double a, double b)
{
	double h = (b - a) / n;
	std::cout << h << std::endl;
	for (int i = 0; i <= h; i++)
	{
		std::cout << sin(a + (h * i)) << std::endl;
	}
}

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