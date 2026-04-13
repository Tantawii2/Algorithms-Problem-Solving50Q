#include <iostream>

#include <string>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int  To)
{

    int rendNumber = rand() % (To - From + 1) + From;
    return rendNumber;

}

enum enCharType
{
    smallLetter = 1,
    capitalLetter = 2,
    digit = 3,
    spechialCharacteer = 4

};
char RandomChar(enCharType CharType)
{

    switch (CharType)
    {
    case smallLetter:
        return char(RandomNumber(97, 122));
        break;
    case capitalLetter:
        return char(RandomNumber(65, 90));
        break;
    case digit:
        return char(RandomNumber(48, 57));
        break;
    case spechialCharacteer:
        return char(RandomNumber(33, 47));
        break;
    default:
        break;
    }
    return '\0';
}



int main()
{
    srand((unsigned)time(NULL));

    cout << RandomChar(smallLetter) << endl;
    cout << RandomChar(capitalLetter) << endl;
    cout << RandomChar(digit) << endl;
    cout << RandomChar(spechialCharacteer) << endl;
    return 0;
}