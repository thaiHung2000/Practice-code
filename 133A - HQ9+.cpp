#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int flag = 0;
    for( int i = 0 ; i < str.size(); i++)
    {
        if (str[i] == 'H' )
        {
            cout << "YES";
            flag = 1;
            break;
        }
        
        if (str[i] == '9' )
        {
            cout << "YES";
             flag = 1;
            break;
        }
        if (str[i] == 'Q' )
        {
            cout << "YES";
             flag = 1;
            break;
        }
        
    }
    if ( flag == 0 )
    {
        cout << "NO";
    }
}
