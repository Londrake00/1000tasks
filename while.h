#pragma once

int while1(int a, int b)
{
	while (a >= b)
	{
		a -= b;
	}
	return a;
}

int while2(int a, int b)
{
	int count = 0;
	while (a >= b)
	{
		count++;
		a -= b;
	}
	return count;
}

void while3(int n, int k)
{
	int chast = 0, ost = 0;
	while (n >= k)
	{
		chast++;
		n -= k;
	}
	ost = n;
	std::cout << chast << "\t" << ost << std::endl;
}

bool while4(int n)
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

int while5(int  n)
{
	int k = 1;
	for (int i = 2; i < n; k++) 
	{
		i *= 2;
	}
	return k;
}

int while6(int num)
{
	if (num == 2 || num == 1)
		return num;
	return num * (num - 2);
}

int while7(int n)
{
	int k = 0;
	while (k * k <= n)
		k++;
	return k;
}

int while8(int n)
{
	int k = 1;
	while (k * k <= n)
		k++;
	return k - 1;
}

int while9(int n)
{
	int k = 0;
	for (k; pow(3, k) > n; k++);
	return k;
}

int while10(int n)
{
	int k = 0;
	for (k; pow(3, k) < n; k++);
	return k;
}

std::pair<int, int> while11(int n)
{
	int sum = 0, k = 1;
	while (sum <= n)
	{
		sum += k;
		k++;
	}
	std::pair<int, int>p(sum, k);
	return p;
}

std::pair<int,int> while12(int n)
{
	int sum = 0, k = 1;
	for (k; sum + k <= n; k++)
	{
		sum += k;
	}
	std::pair<int, int>p(sum, k);
	return p;
}

std::pair<int, int> while13(double a) {
	double sum = 0;
	int k = 0;
	while (sum <= a) {
		k++;
		sum += 1.0 / k;
	}
	std::pair<int, double>p(k, sum);
	return p;
}

std::pair<double, int> while14(int n)
{
	double sum = 0, k = 1;
	for (k; sum <= n; k++)
	{
		sum += 1.0/k;
	}
	std::pair<double, int>p(sum, k);
	return p;
}

std::pair<double, int> while15(double p)
{
	int k = 1;
	double s = 1000;
	for (k; s < 1100; k++)
	{
		s += s * (p / 100);
	}
	std::pair<double, int>pair(s, k);
	return pair;
}

std::pair<double, int> while16(double p)
{
	int k = 1;
	double s = 10;
	for (k; s <= 200; k++)
	{
		s += s * (p / 100);
	}
	std::pair<double, int>pair(s, k);
	return pair;
}

void while17(int n)
{
	for (n; n > 0; n /= 10)
	{
		std::cout << n % 10;
	}
}

std::pair<int, int> while18(int n)
{
	int k = 0, sum = 0;
	for (k; n > 0; k++)
	{
		sum += n % 10;
		n /= 10;
	}
	std::pair<double, int>mypair(k, sum);
	return mypair;
}

int while19(int n)
{
	int newN = 0;
	while (n > 0)
	{
		int digit = n % 10;
		newN = newN * 10 + digit;
		n /= 10;
	}
	return newN;
}

bool while20(int n)
{
	while (n > 0)
	{
		if (n % 10 == 0)
			return true;
		n /= 10;
	}
	return false;
}

bool while21(int n)
{
	while (n > 0)
	{
		if ((n % 10) % 2 == 0)
			return true;
		n /= 10;
	}
	return false;
}

bool while22(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int while23(int a, int b) {
	if (b == 0)
		return a;
	else
		return while23(b, a % b);
}

bool while24(int n)
{
	int a1 = 1, a2 = 1, an = 0;
	while (an < n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
	}
	return n == an;
}

int while25(int n)
{
	int a1 = 1, a2 = 1, an = 0;
	while (an <= n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
	}
	return an;
}

std::pair<int, int> while26(int n)
{
	int a1 = 1, a2 = 1, an = 0;
	while (an != n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
	}
	std::pair<int, int>mypair(a1, an+a1);
	return mypair;
}

int while27(int n)
{
	int a1 = 1, a2 = 1, an = 0, k = 3;
	while (an != n)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
		k++;
	}
	return k;
}

void while28(double e)
{
	double a1 = 0, ak = 1;
	int k = 2;
	while (abs(ak - a1) >= e)
	{
		a1 = ak;
		ak = 2 + 1 / a1;
		k++;
	}
	std::cout << "k = " << k << ", A(k-1)=" << a1 << ", A(k)=" << ak;
}

void while29(double e)
{
	double a1 = 1, a2 = 2, ak = 0;
	int k = 3;
	while (abs(ak - a2) >= e)
	{
		a1 = a2;
		a2 = ak;
		ak = (a1 + 2 * a2) / 3;
		k++;
	}
	std::cout << "k = " << k << ", A(k-1)=" << a2 << ", A(k)=" << ak;
}

int while30(double a, double b, double c)
{
	int k = 0;
	double temp;
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