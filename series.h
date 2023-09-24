#pragma once

int* createIntArray(int size)
{
    int* arr = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) 
    {
        arr[i] = rand() % 10 + 1;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return arr;
}

double* createDoubleArray(int size)
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
    std::cout << std::endl;
    return arr;
}

void series1(int size)
{
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    double* arr = createDoubleArray(size);
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
    double* arr = createDoubleArray(size);
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
    double* arr = createDoubleArray(size);
    for (int i = 0; i < size;i++)
    {
        std::cout << round(arr[i]) << " ";
    }
    delete[] arr;
}

void series8(int size)
{
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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
    int* arr = createIntArray(size);
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

