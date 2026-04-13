#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void InvertNumber(int Number)
{
    for (int i = Number; i > 0; i--)//1
    {
        for (int j = 1; j <= i; j++)//j=1
        {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    InvertNumber(ReadPositiveNumber("Enter Your Positive Number: "));
    return 0;
}