#include <iostream>
using namespace std;
int main()
{
    int numberOfCase;
    cin >> numberOfCase;
    for(int i = 1 ; i <= numberOfCase ; i++ )
    {
        int number;
    
        cin >> number;
        int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
        int count = 0;
        if ( (number >= 10000) && (number % 10000 != 0) )
        {
            count++;
            num1 = (number / 10000) * 10000;
            number = number % 10000;

            
        }
        if ( (number >= 1000) && (number % 1000 != 0) )
        {
            count++;
            num2 = (number / 1000) * 1000;
            number = number % 1000;
        }
        if ( (number >= 100) && (number % 100 != 0) )
        {
            count++;
            num3 = (number / 100) * 100;
            number = number % 100;
        }
        if ( (number >= 10) && (number % 10 != 0) )
        {
            count++;
            num4 = (number / 10) * 10;
            number = number % 10;
        }
        if ( (number >= 1) )
        {
            num5 = number;
            count++;
            
        }
         cout << count<< endl;
        int numar[5] = { num1, num2, num3, num4, num5};
        for (int j = 0 ; j < 5; j ++ )
        {
            if( numar[j] == 0 )
            {
                continue;
            }
            cout << numar[j] << " " ;
            
        }
        cout << endl;
        

    }

}

        

