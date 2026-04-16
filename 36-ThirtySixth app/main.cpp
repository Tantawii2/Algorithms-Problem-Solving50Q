#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;



void AddToArray(int arr[], int Number, int i)
{
    arr[i] = Number;
}


void printArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Start(int Number, int& Flag, int& i, int arr[])
{
    cout << "Please Enter A Number ? " << endl;
    cin >> Number;
    AddToArray(arr, Number, i);
    cout << "Do You Want To Add More Number? [0]:No , [1]:Yes " << endl;
    cin >> Flag;
    i++;
}

int Logic(int Number, int Flag, int arr[])
{
    int i = 0;
    for (; ; )
    {
        if (Flag == 1)
        {
            Start(Number, Flag, i, arr);
        }
        else
        {
            return i;
        }
    }
}


int main()
{
    int arr[100], size = 0, Number = 0, Flag = 1;
    size = Logic(Number, Flag, arr);
    printArray(arr, size);

    return 0;
}