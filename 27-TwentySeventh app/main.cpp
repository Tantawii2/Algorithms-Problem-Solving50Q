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

void AvreageNumber(int arr[100], int size)
{
    int Sum = 0;

    for (int i = 0; i < size; i++)
    {
        Sum += arr[i];
    }


    cout << "The Avreage Of All Numbers is: " << Sum / size << endl;
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
    AvreageNumber(arr, size);

    return 0;
}