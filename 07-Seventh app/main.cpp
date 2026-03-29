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

void Reversed(int Number)
{

    int remainder = 0;
    int num2 = 0;

    for (;Number>0 ;)
    {
        remainder = Number % 10;
        Number = Number / 10;
        num2 = num2 * 10 + remainder;


    }

    cout << num2 << endl;

}

int main()
{
    Reversed( ReadPositiveNumber("Please enter a positive number ? "));
    return 0;
}