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

void Array3SumArray1And2(int arr1[100], int arr2[100], int arr3[100], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
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

    int arr1[100], arr2[100],arr3[100] ,size;

    cout << "Enter The Size Of Array: ";
    cin >> size;

    readArray(arr1, size);
    readArray(arr2, size);
    Array3SumArray1And2(arr1, arr2, arr3, size);

    cout << endl << "Array 1 is = ";

    printArray(arr1, size);

    cout << endl << "Array 2 is = ";

    printArray(arr2, size);

    cout << endl << "The Sum Of Two Array 1 and 2 = ";

    printArray(arr3, size);

    return 0;
}