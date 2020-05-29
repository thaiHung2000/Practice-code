#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int dragonK;
    int dragonL;
    int dragonM;
    int dragonN;
    int total;
    int damaged = 0;
    cin >> dragonK;
    cin >> dragonL;
    cin  >> dragonM;
    cin >> dragonN;
    cin >> total ;
    for ( int i = 1 ; i <= total ; i ++ )
    {
        if( i % dragonK == 0  )
        {
            damaged++;
            continue;
        }
        if( i % dragonM == 0  )
        {
            damaged++;
            continue;
        }
        if( i % dragonL == 0  )
        {
            damaged++;
            continue;
        }
        if( i % dragonN == 0 )
        {
            damaged++;
            continue;
        }

    }
    cout << damaged ;


}

