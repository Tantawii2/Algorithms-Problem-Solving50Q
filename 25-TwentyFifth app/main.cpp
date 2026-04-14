#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void readArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 101; // من 0 إلى 100
    }
}

void MinNumber(int arr[100], int size)
{
    int Min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (Min > arr[i])
        {
            Min = arr[i];
        }
    }

    cout << "The Min Number is: " << Min << endl;
}

void printArray(int arr[100], int size)
{
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], size;
    cout << "Enter The Size Of Array: ";
    cin >> size;

    readArray(arr, size);
    printArray(arr, size);
    MinNumber(arr, size);

    return 0;
}