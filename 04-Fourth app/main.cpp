#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void CheckPerfectNumberORNot(int Number)
{
    for (int j = 1; j < Number; j++)
    {



        int Sum = 0;

        for (int i = 1; i < j; i++)
        {
            if (j % i == 0)
                Sum += i;
        }

        if (Sum == j)
            cout << j << " is a perfect number" << endl;

    }


}

int main()
{
    CheckPerfectNumberORNot(ReadPositiveNumber("Please enter a positive number ? "));
    return 0;
}