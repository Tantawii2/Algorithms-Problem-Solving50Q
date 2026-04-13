#include <iostream>

#include <string>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
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

        cout << " Key [" << i << "] " << Key << endl;

    }
}

int main()
{
    srand((unsigned)time(NULL));
    GenerateKey(ReadPositiveNumber("Enter Your Positive Number: "));
    return 0;
}