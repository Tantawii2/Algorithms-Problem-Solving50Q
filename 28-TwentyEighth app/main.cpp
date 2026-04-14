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

void printArray(int arr[100], int size)
{
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
    {

        if (isPrime(arr[i]))
            cout << arr[i] << " Is prime Number ";



        cout << endl;
    }
}



int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], size;
    cout << "Enter The Size Of Array: ";
    cin >> size;
    readArray(arr1, size);
    printArray(arr1, size);


    return 0;
}