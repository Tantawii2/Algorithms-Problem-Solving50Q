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

int ReverseNumber(int Number)
{
    int remender = 0, Number2 = 0;
    while (Number > 0) {

        remender = Number % 10;/// 1234555 % 10 = 5
        Number /= 10; /// 1234555 / 10 = 123455
        Number2 = Number2 * 10 + remender; /// 0 * 10 + 5 = 5

    }
    return Number2;
}

bool IsPalindrome(int Number)
{
    return Number == ReverseNumber(Number);
}





int main() {
    if (IsPalindrome(ReverseNumber(ReadPositiveNumber("Enter Your Positive Number: "))))
    {
        cout << "The Number is Palindrome" << endl;
    }
    else
        cout << "The Number is Not Palindrome" << endl;

    return 0;
}