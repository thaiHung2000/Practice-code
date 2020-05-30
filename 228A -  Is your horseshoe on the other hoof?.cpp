#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long s[4];
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    int count = 0;
    for( int i = 0 ; i < 3; i++ )
    {
        for( int j = i + 1; j < 4 ; j++ )
        {
            if( s[i] == s[j] )
            {
                count ++ ;
                break;

            }
        }
    }
    
    cout << count;



}

