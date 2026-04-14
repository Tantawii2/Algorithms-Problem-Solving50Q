#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void readArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 101; // من 0 إلى 100
    }
}

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int CopyPrimeArray(int arr1[100], int arr2[100], int size)
{
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr1[i]))
        {
            arr2[j] = arr1[i];
            j++;
        }
    }

    return j; // عدد الأعداد الـ prime
}

void printArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], size;

    cout << "Enter The Size Of Array: ";
    cin >> size;

    readArray(arr1, size);

    cout << "Original Array:\n";
    printArray(arr1, size);

    int primeCount = CopyPrimeArray(arr1, arr2, size);

    cout << "Prime Numbers Array:\n";
    printArray(arr2, primeCount);

    return 0;
}