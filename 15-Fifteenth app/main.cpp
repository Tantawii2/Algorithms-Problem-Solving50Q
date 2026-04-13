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
    char alpha = 65;//A

    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char Sum = alpha + i - 1;
            cout << Sum; // 
        }
        cout << endl;
    }
}



int main() {
    InvertNumber(ReadPositiveNumber("Enter Your Positive Number: "));
    return 0;
}