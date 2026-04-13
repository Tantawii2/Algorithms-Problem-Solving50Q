#include <iostream>

#include <string>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int  To)
{

    int rendNumber = rand() % (To - From + 1) + From;
    return rendNumber;

}


int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;

    return 0;
}