#pragma once
#include <numeric>
#include "windows.h"


int* CreateIntArray(int size)
{
    int* arr = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) 
    {
        arr[i] = rand() % 10;
        std::cout << arr[i] << " ";
    }
    std::cout << " - Random Array" << std::endl;
    return arr;
}

double* CreateDoubleArray(int size)
{
    double* arr = new double[size];
    srand(time(NULL));
    double decimalPart = 0;
    for (int i = 0; i < size; i++)
    {
        decimalPart = (rand() % 10) / 10.0;
        arr[i] = static_cast<double>(rand() % 10 + 1) + decimalPart;
        std::cout << arr[i] << " ";
    }
    std::cout << " - Random Array" << std::endl;
    return arr;
}

void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

void BubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++) 
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
    PrintArray(arr, size);
    std::cout << " - Sorted Array";
    std::cout << std::endl;
}

void series1(int size)
{
    int* arr = CreateIntArray(size);
    int sum = 0;
    for (int i = 0; i < size;i++)
    {
        sum += arr[i];
    }
    std::cout << sum;
    delete[] arr;
}

void series2(int size)
{
    int* arr = CreateIntArray(size);
    int sum = 0;
    for (int i = 0; i < size;i++)
    {
        sum *= arr[i];
    }
    std::cout << sum;
    delete[] arr;
}

void series3(int size)
{
    int* arr = CreateIntArray(size);
    int sum = 0;
    for (int i = 0; i < size;i++)
    {
        sum += arr[i];
    }
    std::cout << (double)sum / size;
    delete[] arr;
}

void series4(int size)
{
    int* arr = CreateIntArray(size);
    int sum = 0, product = 1;
    for (int i = 0; i < size;i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    std::cout << sum << " " << product;
    delete[] arr;
}

void series5(int size)
{
    double* arr = CreateDoubleArray(size);
    double sum = 0;
    for (int i = 0; i < size;i++)
    {
        double decimalPart = arr[i] - static_cast<int>(arr[i]);
        double integerPart = arr[i] - decimalPart;
        std::cout << integerPart << " ";
        sum += integerPart;
    }
    std::cout << std::endl << sum;
    delete[] arr;
}

void series6(int size)
{
    double* arr = CreateDoubleArray(size);
    double product = 1;
    for (int i = 0; i < size;i++)
    {
        double decimalPart = arr[i] - static_cast<int>(arr[i]);
        double integerPart = arr[i] - decimalPart;
        std::cout << arr[i] - integerPart  << " ";
        product *= decimalPart;
    }
    std::cout << std::endl << product;
    delete[] arr;
}


void series7(int size)
{
    double* arr = CreateDoubleArray(size);
    for (int i = 0; i < size;i++)
    {
        std::cout << round(arr[i]) << " ";
    }
    delete[] arr;
}

void series8(int size)
{
    int* arr = CreateIntArray(size);
    int k = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] % 2 == 0)
        {
            std::cout << arr[i] << " ";
            k++;
        }
    }
    std::cout << std::endl << k;
    delete[] arr;
}

void series9(int size)
{
    int* arr = CreateIntArray(size);
    int k = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] % 2 != 0)
        {
            std::cout << arr[i] << " ";
            k++;
        }
    }
    std::cout << std::endl << k;
    delete[] arr;
}

bool series10(int size)
{
    int* arr = CreateIntArray(size);
    int k = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] > 0)
        {
            delete[] arr;
            return true;
        }
    }
    delete[] arr;
    return false;
}

bool series11(int size, int k)
{
    int* arr = CreateIntArray(size);
    for (int i = 0; i < size;i++)
    {
        if (arr[i] < k)
        {
            delete[] arr;
            return true;
        }
    }
    delete[] arr;
    return false;
}

void series12(int size)
{
    int* arr = CreateIntArray(size);
    int k = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] == 0)
            break;
        k++;
    }
    std::cout << k;
    delete[] arr;
}

void series13(int size)
{
    int* arr = CreateIntArray(size);
    int sum = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] == 0)
            break;
        if (arr[i] > 0 && arr[i] % 2 == 0)
            sum += arr[i];
    }
    std::cout << sum;
    delete[] arr;
}

void series14(int size, int k)
{
    int* arr = CreateIntArray(size);
    int count = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] == 0)
            break;
        if (arr[i] < k)
            count++;
    }
    std::cout << count;
    delete[] arr;
}

void series15(int size, int k)
{
    int* arr = CreateIntArray(size);
    bool count = true;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] == 0)
            break;
        if (arr[i] > k)
        {
            std::cout << i;
            count = false;
            break;
        }
    }
    if (count)
        std::cout << "0";
    delete[] arr;
}

void series16(int size, int k)
{
    int* arr = CreateIntArray(size);
    bool count = true;
    int index = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > k)
                    index = j;
            }
            break;
        }
    }
    std::cout << index;
    delete[] arr;
}

void PrintSortedArrayWithNumber(int size, int b) //series 17
{
    int* arr = CreateIntArray(size);
    BubbleSort(arr, size);
    int index = size + 1;
    for (int i = 0; i < size; i++)
        if (*(arr+i) > b)
        {
            index = i;
            break;
        }
    for (int i = 0; i < index; i++)
    {
        std::cout << *(arr+i) << " ";
    }
    std::cout << b << " ";
    for (int i = index; i < size; i++)
    {
        std::cout << *(arr+i) << " ";
    }
    delete[] arr;
}

void PrintArrayWithUniqueNumber(int size) //series 18
{
    int* arr = CreateIntArray(size);
    BubbleSort(arr, size);
    int uniqueNumber = *(arr);
    std::cout << *(arr) << " ";
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) == uniqueNumber)
            continue;
        std::cout << *(arr + i) << " ";
        uniqueNumber = *(arr + i);
    }
    delete[] arr;
}

void PrintArrayWithNumbersLowerThanLeft(int size) //series 19
{
    int* arr = CreateIntArray(size);
    int count = 0;
    std::cout << *(arr) << " ";
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < *(arr + i - 1))
        {
            std::cout << *(arr + i) << " ";
            count++;
        }
    }
    std::cout << std::endl << count;
    delete[] arr;
}

void PrintArrayWithNumbersLowerThanRight(int size) //series 20
{
    int* arr = CreateIntArray(size);
    int count = 0;
    std::cout << *(arr) << " ";
    for (int i = 0; i < size - 1; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            std::cout << *(arr + i) << " ";
            count++;
        }
    }
    std::cout << std::endl << count;
    delete[] arr;
}

bool isArraySortedInAscendingOrder(int size) //series 21
{
    int* arr = CreateIntArray(size);
    for (int i = 0; i < size - 1; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            delete[] arr;
            return false;
        }
    }
    delete[] arr;
    return true;
}

void isArraySortedInDescendingOreder(int size) //series 22
{
    int* arr = CreateIntArray(size);
    int index = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (*(arr + i) < *(arr + i + 1))
        {
            index = i + 1;
            break;
        }
    }
    std::cout << index;
    delete[] arr;
}

void isArraySawtoothed(int size) //series 23
{
    int* arr = CreateIntArray(size);
    int index = 0;
    for (int i = 1; i < size - 1; i++)  
    {
        if ((*(arr + i) > *(arr + i + 1) && *(arr + i) > *(arr + i - 1)) || (*(arr + i) < *(arr + i + 1) && *(arr + i) < *(arr + i - 1)))
        {
            continue;
        }
        else
        {
            index = i + 1;
            break;
        }
        std::cout << index;
    }
    delete[] arr;
}



void PrintSumBetweenLastZeros(int size) //series 24
{
    int* arr = CreateIntArray(size);
    int sum = 0;
    int lastZeroIndex = -1;
    int lastZeroIndex2 = -1;
    for (int i = 0; i < size; i++) 
    {
        if (*(arr + i) == 0)
        {
            lastZeroIndex2 = lastZeroIndex;
            lastZeroIndex = i;
        }

    }
    sum += std::accumulate(arr + lastZeroIndex2, arr + lastZeroIndex, 0);
    std::cout << sum;
    delete[] arr;
}

void PrintNumberBetweenFirstZeros(int size) //series 25
{
    int* arr = CreateIntArray(size);
    int sum = 0;
    int firstZeroIndex = -1;
    for (int i = 0; i < size; i++) 
    {
        if (*(arr + i) == 0)
        {
            if (firstZeroIndex == -1) 
            {
                firstZeroIndex = i;
            }
            else 
            {
                sum += std::accumulate(arr + firstZeroIndex + 1, arr + i, 0);
                break;
            }
        }
    }
    std::cout << sum;
    delete[] arr;
}

void PrintNumberInPower(int size, int k) //series 26
{
    double* arr = CreateDoubleArray(size);
    for (int i = 0; i < size; i++)
    {
        std::cout << pow(*(arr + i), k) << " ";
    }
    delete[] arr;
}

void PrintPowerOfNumbers(int size) //series 27
{
    double* arr = CreateDoubleArray(size);
    for (int i = 0; i < size; i++)
    {
        std::cout << pow(*(arr + i), i + 1) << " ";
    }
    delete[] arr;
}

void PrintPowerOfNumbersInReverseOrder(int size) //series 28
{
    double* arr = CreateDoubleArray(size);
    for (int i = 0; i < size; i++)
    {
        std::cout << pow(*(arr + i), size - i) << " ";
    }
    delete[] arr;
}

int SumOfArrays(int size, int k) //series 29
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        int* arr = CreateIntArray(size);
        for (int j = 0; j < size; j++)
        {
            sum += *(arr + j);
        }
        delete[] arr;
    }
    return sum;
}

void PrintSumOfEachArray(int size, int k) //series 30
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        int* arr = CreateIntArray(size);
        for (int j = 0; j < size; j++)
        {
            sum += *(arr + j);
        }
        std::cout << "Sum = " << sum << std::endl;;
        sum = 0;
        delete[] arr;
        Sleep(1000);
    }
}

