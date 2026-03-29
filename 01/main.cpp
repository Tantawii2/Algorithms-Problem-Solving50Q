#include <iostream>
#include <cstdlib>
using namespace std;




int main ()
{
    for     (int i = 1; i <= 10; i++)
        {
            cout <<"Table" << i << "\t";
            for(int j = 1; j <= 10; j++)
                {
                    cout << i * j << "\t";
                }
                
        cout<<endl;
        }


}