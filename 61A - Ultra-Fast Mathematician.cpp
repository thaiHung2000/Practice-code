#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string number1;
    string number2;
    getline(cin,number1);
    getline(cin,number2);
    char result[number1.size()];
    for( int i = 0 ; i < number1.size() ; i ++  )
    {
        if (number1[i] == number2[i] )
        {
            result[i] = '0';
        }
        else
        {
            result[i] = '1';
        }
    }
    for(int i = 0 ; i < number1.size() ; i ++ )
    {
        cout << result[i];
    }
 
}