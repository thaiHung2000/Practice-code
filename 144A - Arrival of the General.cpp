#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> arr[i];
    }
    int max = arr[0] , positionMax = 1;
 
    int min = arr[0] , positionMin = 1;
    for ( int i = 0 ; i < n ; i ++ )
    {
        if( max <= arr[i] )
        {
            max = arr[i];
            positionMax = i + 1;
        }
        if( min >= arr[i] )
        {
            min = arr[i];
            positionMin = i + 1;
        }
    }
    for ( int i = 0 ; i < n ; i ++ )
    {
        if( max == arr[i] )
        {
            if( positionMax > i )
            {
                positionMax = i + 1;
            }

        }
        if( min == arr[i] )
        {
            if( positionMin < i )
            {
                positionMin = i + 1;
            }

        }
    }
    cout << positionMax << positionMin;
    
    int move = positionMax - 1 + n - positionMin  ;

    if( positionMin < positionMax )
    {
        move = move - 1;

    }
    cout << move ;

}
