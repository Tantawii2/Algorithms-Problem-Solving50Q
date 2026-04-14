#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 101;
    }
}

void SearchInArray(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Number you are looking for is : " << target << endl;
            cout << "The Number Found at Position : " << i + 1 << endl;
            cout << "The Number Found it's order : " << i << endl;
        }
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
    int arr1[100], size, TargetNumber;

    cout << "Enter The Size Of Array: ";
    cin >> size;

    readArray(arr1, size);
    printArray(arr1, size);

    cout << "Please Enter a Number To Search For? ";
    cin >> TargetNumber;
    SearchInArray(arr1, size, TargetNumber);

    return 0;
}