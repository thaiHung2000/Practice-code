#include <iostream>
using namespace std;
int main()
{
    int days ;
    cin >> days;
    int money[days];
    for (int i = 0; i < days; i++ )
    {
        cin >> money[i];
    }
    int length = 0;
    int max = 0 ;
    for(int i = 0 ; i < (days-1); i ++ )
    {
 
        if( money[i] <= money[i+1] )
        {
            length++;
            if( max < length )
            {
                max = length;
            }
            continue;
 
 
        }
        else
        {
        
            
            
            length = 0;
        }
 
    }
    cout << max + 1;
}
