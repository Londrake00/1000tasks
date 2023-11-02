#include <iostream>
#include "loops.h"
#include "while.h"
#include "series.h"
#include <ctime>
#include <cmath>
#include <numeric>
#include "windows.h"

int main()
{
	CalculateElementsOfArray(10, 1, [](int a, int b) { return a * b; });
	std::cout << std::endl;
	CalculateElementsOfArray(10, 0, [](int a, int b) { return a + b; }, true);
}
