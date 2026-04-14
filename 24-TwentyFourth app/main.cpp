#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


void readArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 101; // من 0 إلى 100
    }
}

void MaxNumber(int arr[100], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "The Max Number is: " << max << endl;


}


void printArray(int arr[100], int size)
{
    for (int i = 1; i <= size; i++)
    {
        if (i == 1)
        {
            cout << " Array Elements ";
            cout << arr[i] << " ";
        }
        else
            cout << arr[i] << " ";
    }

    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], size;
    cout << "Enter The Size Of Array: " << endl;
    cin >> size;
    readArray(arr, size);
    printArray(arr, size);
    MaxNumber(arr, size);

    return 0;
}