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
	FindLengthOfSegment(5, 1.3, 5.3, [](double h, int i, double a) { return a + (h * i); });
}
