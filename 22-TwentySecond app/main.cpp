#include <iostream>
#include <string>
using namespace std;

void readArray(int arr[100], int size)

{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}


int readTagetNumber()
{
    int number;
    cout << "Enter The Target Number: " << endl;
    cin >> number;
    return number;
}

void ReapeatedNumber(int arr[20], int size, int target)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            sum++;

        }
    }
    cout << "The target number appears " << sum << " times in the array." << endl;
}


int main() {
    int arr[100], size;
    cout << "Enter The Size Of Array: " << endl;
    cin >> size;
    readArray(arr, size);
    int target = readTagetNumber();;

    ReapeatedNumber(arr, size, target);
    return 0;
}