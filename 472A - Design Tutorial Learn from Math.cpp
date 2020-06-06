#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int a , b;
    for(int i = 4 ; i <= n; i ++ )
    {
        int flagA = 0, flagB = 0;
        int flag = 0;
        a = i ;
        b = n - a;
        if( b == 0 )
        {
            continue;
        }
        for ( int j = 2; j < 10; j ++ )
        {
            if( a % j == 0 && a != j )
            {
                flagA = 5;
            }
            if( b % j == 0 && b != j )
            {
                flagB = 5;
            }
            if( flagA == 5 && flagB == 5)
            {
                flag = 5;
                break;
            }
        }
        if( flag == 5)
        {
            cout << a << " " << b;
            break;
        }
    }
        
    

}
