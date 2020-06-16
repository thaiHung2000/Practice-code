#include <iostream>
using namespace std;
int main()
{
    int numberOfCharacters;
    cin >> numberOfCharacters;
    char string[numberOfCharacters];
    int count = 0;
    for(int i = 0 ; i < numberOfCharacters; i ++ )
    {
        cin >> string[i];
    }
    for ( char i = 'a' ; i <= 'z' ; i ++)
    {
        for (int j = 0; j < numberOfCharacters ; j ++ )
        {
            if( string[j] == i  )
            {
                count++;
                break;
            }
        }
    }
    for ( char i = 'A' ; i <= 'Z' ; i ++)
    {
        int flag = 0;
        for (int j = 0; j < numberOfCharacters ; j ++ )
        {
            if( string[j] == i )
            {
                for ( int z = 0 ; z < numberOfCharacters ; z++ )
                {
                    if( string[z] == i + 32 )
                    {
                        flag = 1;
                    }
                }
                if(flag == 1)
                {
                    break;
                }
                count++;
                break;
            }
        }
    }
    
    if( count < 26 )
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
