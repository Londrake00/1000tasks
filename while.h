#pragma once

template <class T> //while 1
T FindSegmentLength(T a, T b) 
{
	while (a >= b) 
	{
		a -= b;
	}
	return a;
}

template <class T> //while 2
T FindMaxValueOfSegemntsOnSegment(T a, T b) 
{
	T count = 0;
	while (a >= b) 
	{
		count++;
		a -= b;
	}
	return count;
}

template<class T> //while 3
void PrintQuotientAndReminder(T n, T k) 
{
	int quotient = 0, remainder = 0;
	while (n >= k)
	{
		quotient++;
		n -= k;
	}
	remainder = n;
	std::cout << quotient << "\t" << remainder << std::endl;
}

template<class T> //while 4
bool IsNumberAPowerOfThree(T n) 
{
	int k = 3;
	while (k <= n)
	{
		if (k == n)
			return true;
		else
			k *= 3;
	}
	return false;
}


template <class T>//while 5
T FindPowerOfTwo(T n)
{
	T k = 1;
	for (T i = 2; i < n; k++)
	{
		i *= 2;
	}
	return k;
}

int DoubleFactorial(int num) //while 6 (no need for template)
{
	if (num == 2 || num == 1)
		return num;
	return num * (num - 2);
}

template<class T> //while 7, 8
T SquareRoot(int n, bool isWhileEight)
{
	T k = 1;
	while (k * k <= n)
		k++;
	if (isWhileEight) 
	{
		return k - 1;
	}
	else 
	{
		return k;
	}
}

template <class T> //while 9, 10
int PowerOfThree(T n, bool isWhileNine) {
	int k = 0;
	if (isWhileNine) 
	{
		while (pow(3, k) > n)
			k++;
	}
	else 
	{
		while (pow(3, k) < n)
			k++;
	}
	return k;
}

template<class T> //while 11,12
std::pair<T, T> whileTemplate(T n, bool isWhileEleven)
{
	T sum = 0, k = 1;
	if (isWhileEleven)
	{
		while (sum + k <= n)
		{
			sum += k;
			k++;
		}
	}
	else
	{
		for (; sum + k <= n; k++)
		{
			sum += k;
		}
	}

	return std::make_pair(sum, k);
}

template<class T> //while 13,14
std::pair<T, T> SumLowerNumber(T n, bool isWhileFourteen)
{
	T sum = 0, k = 1;
	if (isWhileFourteen)
	{
		while (sum + 1.0 / k <= n)
		{
			k++;
			sum += 1.0 / k;
		}
		return std::make_pair(sum, k - 1);
	}
	else
	{
		while (sum <= k) 
		{
			sum += 1.0 / k;
			k++;
		}
		return std::make_pair(sum, k);
	}

}

template<class T, class Operation> //while 15, 16
std::pair<T, int> FindPrice(T p, T init, Operation condition)
{
	int k = 1;
	double s = init;
	while (condition(s))
	{
		s += s * (p / 100);
		k++;
	}
	return std::make_pair(s, k);
}

std::pair<double, int> while15 = FindPrice(10.0, 1000.0, [](double s) {return s < 1100;});
std::pair<double, int> while16 = FindPrice(10.0, 10.0, [](double s) {return s <= 200;});


void while17(int n)//no need for template
{
	for (n; n > 0; n /= 10)
	{
		std::cout << n % 10 << " ";
	}
}

template <class T> // while 18
std::pair<T, T> PrintDigitsOfNumber(T n)
{
	T k = 0, sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
		k++;
	}
	return std::make_pair(k, sum);
}

template <class T> //while 19
T ReverseNumber(T n)
{
	T newN = 0;
	while (n > 0)
	{
		T digit = n % 10;
		newN = newN * 10 + digit;
		n /= 10;
	}
	return newN;
}

template<class T, class Operation>//while 20, 21
bool CheckDigit(T n, Operation condition)
{
	while (n > 0)
	{
		if (condition(n))
			return true;
		n /= 10;
	}
	return false;
}

bool while20 = CheckDigit(43242, [](int n) {return n % 10 == 0;});
bool while21 = CheckDigit(54342, [](int n) {return (n % 10) % 2 == 0;});


template <class T> //while 22
bool isNumberPrime(T n)
{
	for (T i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

template <class T>//while 23
T FindGCD(T a, T b)
{
	if (b == 0)
		return a;
	else
		return while23(b, a % b);
}

template <class T>//while 24
bool isFibonacciNumber(T n)
{
	T a1 = 1, a2 = 1, an = 0;
	while (an < n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
	}
	return n == an;
}

template <class T> //while 25
T FirstFibonacciNumberGreaterThanN(T n)
{
	T a1 = 1, a2 = 1, an = 0;
	while (an <= n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
	}
	return an;
}

template <class T> //while 26
std::pair<T, T> PreviosAndNextFibonacciNumber(T n)
{
	T a1 = 1, a2 = 1, an = 0;
	while (an != n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
	}
	return std::make_pair(a1, an + a1);
}

template <class T>//while 27
T SerialNumberOfFibonacci(T n)
{
	T a1 = 1, a2 = 1, an = 0, k = 3;
	while (an != n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
		k++;
	}
	return k;
}

template <class T>//while 28
void SequnenceWithCondition(T e)
{
	T a1 = 0;
	T ak = 1;
	int k = 2;
	while (abs(ak - a1) >= e)
	{
		a1 = ak;
		ak = 2 + 1.0 / a1;
		k++;
	}
	std::cout << "k = " << k << ", A(k-1)=" << a1 << ", A(k)=" << ak;
}

template <class T> //while 29
void AnotherSequnenceWithCondition(T e)
{
	T a1 = 1;
	T a2 = 2;
	T ak = 0;
	int k = 3;
	while (std::abs(ak - a2) >= e)
	{
		a1 = a2;
		a2 = ak;
		ak = (a1 + 2 * a2) / 3.0;
		k++;
	}
	std::cout << "k = " << k << ", A(k-1)=" << a2 << ", A(k)=" << ak << std::endl;
}

template <class T> //while 30
T FindAmountOfSquaresInRectangle(T a, T b, T c)
{
	int k = 0;
	T temp;
	while ((a - c) >= 0)
	{
		a -= c;
		temp = b;
		while (temp - c >= 0)
		{
			temp -= c;
			k++;
		}
	}
	return k;
}
