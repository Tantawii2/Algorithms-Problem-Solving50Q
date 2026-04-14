#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void readArray(int arr[100], int size)

{
    for (int i = 1; i <= size; i++)
    {
        arr[i] = rand() % (100 - 0 + 1) + 0;
    }
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
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], size;
    cout << "Enter The Size Of Array: " << endl;
    cin >> size;
    readArray(arr, size);
    printArray(arr, size);

    return 0;
}