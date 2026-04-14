#include <iostream>

#include <string>
#include <cstdlib>
using namespace std;

}

void ReadArray(int arr, size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i]= GenerateKey(i)
    }
}

int RandomNumber(int From, int  To) {

    int rendNumber = rand() % (To - From + 1) + From;
    return rendNumber;

}
void GenerateKey(int number)
{
    for (int i = 1; i <= number; i++)
    {
        string Key = "";
        for (int i = 1; i <= 4; i++)
        {
            Key += RandomNumber(65, 90);
        }
        Key += "-";
        for (int i = 1; i <= 4; i++)
        {
            Key += RandomNumber(65, 90);
        }
        Key += "-";
        for (int i = 1; i <= 4; i++)
        {
            Key += RandomNumber(65, 90);
        }
        Key += "-";
        for (int i = 1; i <= 4; i++)
        {
            Key += RandomNumber(65, 90);
        }
       
    }
}


void printArray(int arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], size = 0;

    cout << "Enter The Size Of Array: ";

    cin >> size;

    ReadArray(arr, size);

    GenerateKey(arr, size);

    return 0;
}